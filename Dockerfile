FROM alpine:3.6
LABEL   maintainer="Aviator" \
        discord="Aviator#1024"

ENV DB_VERSION=4.8.30.NC

ADD . ./wallet

RUN deps="alpine-sdk curl autoconf automake libtool boost-dev openssl-dev libevent-dev" && \
    apk add -U $deps dumb-init boost boost-program_options libevent libssl1.0 && \
    curl -L http://download.oracle.com/berkeley-db/db-$DB_VERSION.tar.gz \
    | tar zx && \
    cd /db-$DB_VERSION/build_unix && \
    ../dist/configure \
      --prefix=/opt/db \
      --enable-cxx \
      --disable-shared \
      --with-pic && \
    make install && \
    cd /wallet && \
    ./autogen.sh && \
    ./configure LDFLAGS=-L/opt/db/lib CPPFLAGS=-I/opt/db/include \
      && \
    make install && \
    adduser -D wallet && \
    apk del $deps && \
    rm -r /opt/db/docs /var/cache/apk/* /wallet /db-$DB_VERSION

VOLUME ["/home/wallet/.ccbc"]

EXPOSE 5520/tcp

USER wallet
CMD ccbcd -printtoconsole

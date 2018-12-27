#!/bin/sh
cd ..
sudo apt install g++-mingw-w64-i686 mingw-w64-i686-dev
PATH=$(echo "$PATH" | sed -e 's/:\/mnt.*//g') # strip out problematic Windows %PATH% imported var
cd depends
make HOST=i686-w64-mingw32
cd ..
./autogen.sh
./configure LDFLAGS="-L`pwd`/db4/lib/" CPPFLAGS="-I`pwd`/db4/include/" --prefix=`pwd`/depends/i686-w64-mingw32
make
cd src
cd qt
strip ccbc-qt.exe
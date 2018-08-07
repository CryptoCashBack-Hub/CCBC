
Debian
====================
This directory contains files used to package ccbcd/ccbc-qt
for Debian-based Linux systems. If you compile ccbcd/ccbc-qt yourself, there are some useful files here.

## ccbc: URI support ##


ccbc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ccbc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ccbcqt binary to `/usr/bin`
and the `../../share/pixmaps/ccbc128.png` to `/usr/share/pixmaps`

ccbc-qt.protocol (KDE)


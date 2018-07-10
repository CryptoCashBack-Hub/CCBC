
Debian
====================
This directory contains files used to package smrtcd/smrtc-qt
for Debian-based Linux systems. If you compile smrtcd/smrtc-qt yourself, there are some useful files here.

## smrtc: URI support ##


smrtc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install smrtc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your smrtcqt binary to `/usr/bin`
and the `../../share/pixmaps/smrtc128.png` to `/usr/share/pixmaps`

smrtc-qt.protocol (KDE)


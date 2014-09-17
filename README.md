It has an example of line, circle, arc, ellipse.

Prerequisite :

1) libdxfrw-0.5.7 (http://sourceforge.net/projects/libdxfrw/files/libdxfrw-0.5.7.tar.bz2/download)

2) unTar it with : tar jxf libdxfrw-0.5.7.tar.bz2

3) ./configure

4) make

5) sudo make install (as root)

In case of any error try to install

$ sudo apt-get install libglu1-mesa:i386

Configuration :

$ cd dxfrwInterface

$ qmake example.pro

$ make

$ ./example <dxf file>

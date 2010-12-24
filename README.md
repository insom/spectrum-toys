Spectrum Toys
=============

Some utilities to use with xspect for cross-development of Spectrum 48K
software.

Quick Start
-----------

Run the make file, and (if you have GCC, SDCC and Python installed) you should
get a write-garbage.sna. You can execute this with xspect, then just

RANDOMISE USR 32768

to start it running. You could, if you wanted, write it out to a TAP file,
then convert that to a WAV to run on a real Speccy. I suppose.

write-garbage.c
---------------

Write some characters into the 48K video memory. It's just a test.

ihx-to-raw.py
-------------

SDCC outputs Intel Hex format, so we need to turn that into straight up
binary before we can do anything with it.

raw-into-sna.c
--------------

Lets take a Spectrum snapshot from xspect, and write the binary into a fixed
offset inside it. This is equivalent to 0x4000.

template.sna
------------

A 48K Spectrum snapshot.

License
-------

Copyright (c) 2007, Aaron Brady

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

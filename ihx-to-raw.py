#!/usr/bin/python
'''Create a "raw" file from an Intel Hex file'''

__author__ = 'Aaron Brady <bradya@gmail.com>'

import re
import sys

r = re.compile(r'^:(..)(....)(..)(.*)(..)$')

py = open(sys.argv[1], 'rt').read()
f = open(sys.argv[2], 'w')

for line in py.split("\n"):
    if not line: continue
    groups = r.match(line).groups()
    dater = groups[3]
    for q in range(0, len(dater) / 2):
        byte = dater[(q*2):((q+1)*2)]
        f.write(chr(int(byte,16)))

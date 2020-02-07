#!/usr/bin/env python

from sys import argv

def to_hex_digit(n):
    if n >= 0 and n < 10:
        return str(n)
    if n == 10:
        return 'A'
    if n == 11:
        return 'B'
    if n == 12:
        return 'C'
    if n == 13:
        return 'D'
    if n == 14:
        return 'E'
    if n == 15:
        return 'F'

def convert_to_hex(n):
    if n <= 0:
        return

    convert_to_hex(n >> 4)
    print(to_hex_digit(n % 16), end='')

def convert_to_octal(n):
    if n <= 0:
        return

    convert_to_octal(n >> 3)
    print(to_hex_digit(n % 8), end='')

def convert_to_base(n, base):
    if n <= 0:
        return

    convert_to_base(n // base, base)
    print(to_hex_digit(n % base), end='')

def convert_to_binary(n):
    if n <= 0:
        return

    convert_to_binary(n >> 1)
    print(n % 2, end='')

def convert_base(n, base=2):
    if n == 0:
        print('0', end='')
    convert_to_base(n, base)

for n in range(0, int(argv[1]) + 1):
    print('base%d(%d)' % (int(argv[2]), n), '= ', end='')
    convert_base(n, int(argv[2]))
    print()

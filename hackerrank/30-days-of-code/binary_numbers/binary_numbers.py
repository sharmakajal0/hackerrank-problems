#!/usr/bin/env python

import math
import os
import random
import re
import sys

def binary_number(num):
    return bin(n).replace('0b', "")

if __name__ == '__main__':
    n = int(input())
    test = []
    counter = 0
    binary = binary_number(n)
    binary = str(binary) + '0'
    for i in binary:
        if i == '1':
            counter += 1
        elif i == '0':
            test.append(counter)
            counter = 0
    # print(''.join(binary))
    # print(test)
    print(max(test))
    
#!/usr/bin/env python

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    arr = []
    sum = 0
    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    for i in range(6):
        for j in range(6):
            sum += arr[i][j]
    print(sum)


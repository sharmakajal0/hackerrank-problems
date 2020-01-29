#!/usr/bin/env python

import math
import os
import random
import re
import sys

# Complete the factorial function below.
def factorial(n):
    value = 1
    for i in range(2, n + 1):
        value = i * factorial(n-1)
    return value

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = factorial(n)

    fptr.write(str(result) + '\n')

    fptr.close()


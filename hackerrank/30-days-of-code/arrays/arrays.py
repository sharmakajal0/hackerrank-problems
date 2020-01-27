#!/usr/bin/env python3

import math
import sys

def reverse_array(test_array):
    reverse = test_array[::-1]
    return reverse

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    print(*reverse_array(arr))

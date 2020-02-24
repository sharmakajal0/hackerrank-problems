#!/user/bin/env python

import math
import os
import random
import re
import sys

def solution(arr):
    max_sum = -1000
    for i in range(4):
        for j in range(4):
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
            if max_sum < sum:
                max_sum = sum
    return max_sum

if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    print(solution(arr))

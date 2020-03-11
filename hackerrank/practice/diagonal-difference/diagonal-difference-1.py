#!/usr/bin/env python

SIZE = int(input())
left, right = 0, 0

for i in range(SIZE):
    row = list(map(int, input().split(' ')))
    left += row[i]
    right += row[SIZE - i - 1]

print(abs(left - right))

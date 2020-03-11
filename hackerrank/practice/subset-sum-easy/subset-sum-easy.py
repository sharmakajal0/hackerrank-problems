#!/usr/bin/env python

import itertools

def findSubsets(s, n):
    return list(itertools.combinations(s, n))

t = int(input())
n = int(input())
s = list(map(int, input().split()))

combinations = findSubsets(s, 2)

test_list = []
for i in range(len(combinations)):
    result = combinations[i][0] + combinations[i][1]
    test_list.append(result)

if 0 in test_list:
    print("Yes")
else:
    print("No")

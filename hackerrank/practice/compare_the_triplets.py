#!/usr/bin/env python

import os

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    alice_score, bob_score = 0, 0
    for i in range(len(a)):
        for j in range(len(b)):
            if i == j and a[i] > b[j]:
                alice_score += 1
            elif i == j and a[i] < b[j]:
                bob_score += 1
    return alice_score, bob_score


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))
    
    # a = [17, 28, 30]

    # b = [99, 16, 8]

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

#!/usr/bin/env python

'''module for comparison of triplets'''

import os

# Complete the compareTriplets function below.
def compare_triplets(list_a, list_b):

    '''function for comparison of triplets'''
    alice_score, bob_score = 0, 0
    for i, value_i in enumerate(list_a):
        for j, value_j in enumerate(list_b):
            if i == j and value_i > value_j:
                alice_score += 1
            elif i == j and value_i < value_j:
                bob_score += 1
    return alice_score, bob_score


if __name__ == '__main__':
    FPTR = open(os.environ['OUTPUT_PATH'], 'w')

    LIST_A = list(map(int, input().split()))

    LIST_B = list(map(int, input().split()))

    # LIST_A = [17, 28, 30]

    # LIST_B = [99, 16, 8]

    RESULT = compare_triplets(LIST_A, LIST_B)
    print(RESULT)

    FPTR.write(' '.join(map(str, RESULT)))
    FPTR.write('\n')

    FPTR.close()

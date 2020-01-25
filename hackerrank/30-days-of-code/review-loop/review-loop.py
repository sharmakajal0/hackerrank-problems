#!/usr/bin/env python

def review_loop(test_string):
    left = ''
    right = ''
    i = 0
    while(i < len(test_string)):
        if i % 2 == 0:
            left += test_string[i]
        else:
            right += test_string[i]
        i += 1
    return left, right

for _ in range(int(input())):
    TEST_STRING = input()
    result = review_loop(TEST_STRING)
    print(' '.join(map(str, result)))

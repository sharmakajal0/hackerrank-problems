#!/usr/bin/env python3

'''Module for Project Euler'''

TEST_CASES = int(input())
while TEST_CASES > 0:
    TEST_CASES -= 1
    TEST_NUM = int(input())
    TOTAL_SUM = 0
    i = 0
    while i < TEST_NUM:
        if i % 3 == 0 or i % 5 == 0:
            TOTAL_SUM = TOTAL_SUM + i
        i += 1
    print(TOTAL_SUM)

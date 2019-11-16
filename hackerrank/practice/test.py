#!/usr/bin/env python

def bubble_sort(arr, n):
    minimum, maximum = 100000000, -100000000
    for i in range(n):
        if minimum > arr[i]:
            minimum = arr[i]
        if arr[i] > maximum:
            maximum = arr[i]

    count_size = maximum - minimum + 1
    counts = [0] * count_size
    # print_array(counts)
    
    for i in range(n):
        counts[arr[i] - minimum] += 1

    # print_array(counts)

    pairs = 0

    for i in counts:
        pairs += i // 2
    print(pairs)

def print_array(test_array):
    print(' '.join(map(str, test_array)))

size = int(input())
array = list(map(int, input().split(" ")))
# print_array(array)
bubble_sort(array, size)
# print_array(array)
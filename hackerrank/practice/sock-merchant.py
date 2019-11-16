#!usr/bin/env python

def sock_merchant(arr, n):
    count = [0] * n
    for index in range(n):
        count[index] = 0

    return count

socks_count = 7
test_array = [1, 2, 1, 2, 1, 3, 2]
result = sock_merchant(test_array, socks_count)
print(result)
#!/usr/bin/env python
print('\n'.join(map(lambda i: str((i[2] + i[1] - 2 + i[0]) % i[0] + 1), [list(map(int, input().split())) for t in range(int(input()))])))

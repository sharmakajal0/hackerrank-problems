#!/usr/bin/env python

def minimum_distance(test_array):
    
    distances = []
    for index, value in enumerate(test_array):
        for index2, value2 in enumerate(test_array):
            if value == value2 and index != index2:
                distance = index2 - index
                if distance < 0:
                    distance = distance * -1
                distances.append(distance)
    if len(distances) > 0:
        print(min(distances))
    else:
        print(-1)
            

for _ in range(int(input())):
    n = int(input())
    input_array = list(map(int, input().split()))
    minimum_distance(input_array)
            
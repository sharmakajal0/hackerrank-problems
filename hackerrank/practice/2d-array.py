#!/usr/bin/env python

# A basic code for matrix input from user

R = int(input())
C = int(input())

# Initialize matrix

MATRIX = []

print("Enter the entries row-wise")

# For use input()

for i in range(R):
    a = []
    for j in range(C):
        a.append(int(input()))
    MATRIX.append(a)

for i in range(R):
    for j in range(C):
        print(MATRIX[i][j], end=" ")
    print()

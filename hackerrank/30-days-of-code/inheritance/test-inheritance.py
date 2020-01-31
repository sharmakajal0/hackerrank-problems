#!/usr/bin/env python

def calculate(scores):
    sum = 0
    for i in range(len(scores)):
        sum += scores[i]
    average = sum/len(scores)
    
    if average >= 90 and average <= 100:
        grade = "O"
    elif average < 90 and average >= 80:
        grade = "E"
    elif average < 80 and average >= 70:
        grade = "A"
    elif average < 70 and average >= 55:
        grade = "P"
    elif average < 55 and average >= 40:
        grade = "D"
    else:
        grade = "T"
    return grade

scores = list( map(int, input().split()) )
print(calculate(scores))

#!/usr/bin/env python3
import cmath

a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))

top = (b ** 2) - (4 * a * c)

root1 = (- b - cmath.sqrt(top)) / (2*a)
root2 = (- b + cmath.sqrt(top)) / (2*a)

print('Your Answers are {0} and {1}'.format(root1,root2))

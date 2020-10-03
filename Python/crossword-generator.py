#!/usr/bin/env python3

import sys
[A, B] = sys.stdin.read().split()

for letter in A:
    if letter in B:
        # x and y values for where the words intersect each other
        x = A.index(letter)  # x is where B intersect A
        y = B.index(letter)  # y is where A intersects B
        break

plot = []  # plot will act as a grid, size len(A) x len(B)
i = 0
# i will be the current y value
# j will be the current x value
while i < len(B):
    s = ""  # s is the current row of the plot
    if i != y:  # if current value of i != position y, where A intersect B
        j = 0
        while j < len(A):
            if j != x:  # if j != position x, where B intersect A. then add a dot to string s
                s += "."
            else:  # if j == position  x, where B intersects A,
                s += B[i]  # then add the letter in word B, at the index of current i position
            j += 1
        plot.append(s)
    # if current i is at position y,  where A intersects B
    # we know that should be word A printed vertically in this row
    # s = A , plot.append(s) or plot.append(A)
    else:
        plot.append(A)
    i += 1
print("\n".join(plot))

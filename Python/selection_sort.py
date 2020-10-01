#!/usr/bin/env python

def selectionsort(a):
    i = 0
    while i < len(a):
        p = i
        j = i + 1
        while j < len(a):
            if a[j] < a[p]:
                p = j
            j = j + 1

        tmp = a[p]
        a[p] = a[i]
        a[i] = tmp

        i += 1
    return a

list = [4,12,7,3,5,9,4,2,0,4,2]
print(selectionsort(list))

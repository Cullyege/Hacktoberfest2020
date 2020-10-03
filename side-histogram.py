#!/usr/bin/env/python 3

import sys

s = sys.stdin.read().split("\n")[:-1]

data = {}
for item in s:
    data[item.split()[0]] =  item.split()[1]

def longest_item(data):
    tmp = 0
    for x in data:
        if len(x) > tmp:
            tmp = len(x)
    return tmp

max_len = longest_item(data)

for (key, value) in data.items():
    bar = "*" * int(value)
    print("{:>{:d}s}  I".format(key, max_len) + bar)

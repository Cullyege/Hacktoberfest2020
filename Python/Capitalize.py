import re

def solve(s):
    a = []
    l = re.split(" ", s)
    for c in l:
        a.append(c.capitalize())
    return " ".join(a)

if __name__ == '__main__':

    s = 'sakshi agrawal'

    result = solve(s)

    print(result)

import sys

ip = input("ENTER IP : ").split()[0].split(".")

l = []
for j in ip:
    j = int(j)
    i = 0
    while 2 ** i <= j:
        i += 1
    i = i - 1
    s = j
    q= ""
    while i >= 0:
        if s / (2 ** i) >= 1:
            q += str(1)
            s = s % (2 ** i)

        else:
            q += str(0)
        i -= 1
    q = "{:08d}".format(int(q))
    l.append(q)

print("BINARY : {}".format(".".join(l)))

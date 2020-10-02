try:
    s = input()
    print("String before the operation: "+s)
    s = list(s)
    s = list(set(s))
    print("String after the operation: ",end=" ")
    print("".join(s))
    
except:
    pass

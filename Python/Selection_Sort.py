# Selection s=Sort

# sort Function
def sorte(l):
    for i in range(len(l)-1):
        min=i
        for j in range(i,len(l)):
            if(l[j]<l[min]):
                min=j
        temp=l[i]
        l[i]=l[min]
        l[min]=temp

l=[8,5,3,6,7,2,63,17,23]

sorte(l)

print(l)
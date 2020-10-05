try:
    n = int(input("Enter the quantity n: "))
except:
    print("It needs to be a whole amount!")
    exit()
k=0
for i in range(n):
    k+=float(input(str(i+1)+"º number: "))
print("The average is:",k/n)

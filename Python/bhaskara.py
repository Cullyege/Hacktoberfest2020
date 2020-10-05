import math

a = float(input("\na: "))
b = float(input("b: "))
c = float(input("c: "))

delta=(b**2)-(4*a*c)
if delta<0 or a==0:
    print("Impossible to calculate")
else:
    raiz=math.sqrt(delta)
    x1=(-b+raiz)/(2*a)
    x2=(-b-raiz)/(2*a)
    print("R1 = %.5f"%x1)
    print("R2 = %.5f"%x2)

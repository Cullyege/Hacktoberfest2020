a = int(input('Enter a no. : '))
b = 1
if a < 0:
    print ('Factorial is not for negative no.')
elif a==0:
    print ('Factorial of 0 is 1')
else:
    for i in range(1,a+1):
        b= b*i
    print(f"Factorial of {a} is {b}")
input ('press any key to exit')


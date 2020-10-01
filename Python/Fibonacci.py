# Program to display the Fibonacci sequence up to n-th number

nnumbers = int(input("How many terms? "))

# first two numbers
n1, n2 = 0, 1
count = 0

# check if the number is valid
if nnumbers <= 0:
   print("Please enter a positive integer!!")
elif nnumbers == 1:
   print("Fibonacci sequence up to",nnumbers," is:")
   print(n1)
else:
   print("Fibonacci sequence up to " + str(nnumbers) + " is:")
   while count < nnumbers:
       print(n1)
       n_n = n1 + n2
       # update values
       n1 = n2
       n2 = n_n
       count += 1
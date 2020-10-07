n = as.integer(readline(prompt="Enter number: "))
token = 0

if(n > 1) {
token = 1
for(i in 2:(n-1)) {
if ((n %% i) == 0) {
token = 0
break
}
}
} 
if(n == 2)    token = 1
if(token == 1) {
print(paste(n,"is prime"))
} else {
print(paste(n,"is not prime"))
}
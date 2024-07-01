# Recursion
def gcd(a,b):
    if(b==0):
        return abs(a)
    else:
        return gcd(b,a%b)

print("Enter First number :")
a=int(input())
print("Enter second number :")
b=int(input())

c = gcd(a,b)
        
print(c)
print ("\n")
# function
import math

print (math.gcd(a,b))
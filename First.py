import sys
print("The name of file is",sys.argv[0])
print(len(sys.argv))
print("Printing the argumnet list :",str(sys.argv))

sum=0
for i in range(1,len(sys.argv)):
    sum+=int(sys.argv[i])

print(sum)
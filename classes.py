class abc:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def display (self):
        c = self.a + self.b
        print(c)
obj1=abc(1,2)
obj1.display()

class student:
    def __init__(adarsh,c,h,a,u):
        adarsh.c=c
        adarsh.h=h
        adarsh.a=a
        adarsh.u=u
    def display(adarsh):
        ans = adarsh.c + adarsh.a +adarsh.h +adarsh.u
        print(ans)
obj2 = student(12,34,5,6)
obj2.display()

    
    
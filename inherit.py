# # class A:
# #      print("Parent")

# # class B(A):
# #      print("Child")

# # class C(B):
# #      print("Grand Child")
# # a = A()
# # b = B()
# # # c = C()
     


# # class A:
# #      def show(self):
# #           print("in A")
# # class B(A):
# #      def show1(self):
# #           print("in B")
# # class C(B,A):
# #      def show2(self):
# #           print("in C")
     
# # c = C()
# # c.show()
# # c.show1()
# # c.show2()

# class person:
#      def __init__(self,name,Age):
#           self.name = name
#           self.Age = Age

# class company:
#      def __init__(self,company_name,age):
#           self.company_name = company_name
#           self.age = age
          
# class Employee(person,company):
#      def __init__(self,salary,specilaization):
#           self.salary = salary
#           self.specilaization = specilaization
#           super().__init__()
          
# e = Employee(10,1)
# print(e.salary)
# print(e.specilaization)

# class a:
#      def display(self):
#           return "google"
# class b(a):
#      def show(self):
#           c = super().display()
#           print("Jessica works at",c)
          
# B = b()
# B.show()

# class car():
#      def __init__(self,window,door,engine):
#           self._window = window
#           self._door = door
#           self.engine  = engine

# # print(audi._car__door)
# class A(car):
#      def __init__(self):
#           print("child")
#           super
          
# a  = A()
# print(a._door)

class emp:
     noOflea = 8
     var = 8
     _prct = 9
     _pr = 98
     
     def __init__(self,aname,asal,arole):
          self.name = aname
          self.sal = asal
          self.role = arole
          
     def printdetails(self):
          return "The name is {self.name}. Salary is {self.sal} and role is {self.role}"
     
     def changeLeave(cls,newleave):
          cls.noOflea = newleave
          
     def fromDash(cls,string):
          return cls(*string.split("-"))
          
     def printGood(string):
          print("This is good" + string)

e = emp("ada",343,"pro")

print(e._pr)
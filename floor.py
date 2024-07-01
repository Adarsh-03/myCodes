# key=(1,2,3,4,5,6,7,8)
# value = 'xyzabc'
# sqr = {}
# sqr.fromkeys(key,value)
# # # print(sqr.fromkeys(key,value))

# # std={'name':'Bob','age':24,'phone':[12345,67890]}
# # print(std.keys()
# # print(std.values())
# # print(std.items())

# A = {1:1,2:4,4:8,6:36}
# B ={3:9,5:25}
# A.update(B)
# print(A)
# print(B)


# s1 = set([1,2,3,4,5,6,7])
# s1.add(34)
# s1.add(0)
# s1.add(98)
# s1.update(22,13,43)
# s1.remove(4)/
# s1.discard(3)
# print(s1)
# s2 = set("ABES","gauri","ABES","gauri")
# print(s2)

set = {'abc','pqr','xyz'}
set2 = {'a','b','c','abc'}
print(set | set2)
print(set & set2)
print(set - set2)
print(set ^ set2)

set3 = set.union(set2)
print(set)
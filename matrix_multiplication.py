A =[[1,2,3],
   [4,5,6]]
B = [[5,6],
    [3,4],
    [1,2]]
ans = [[0,0],
       [0,0]]



# for i in range(len(a)):
#     for j in range(len(b[0])):
#         for k in range(len(b)):
#             ans[i][j] +=  a[i][k]*b[k][j]
            
# print (ans)

# ans = [[sum(a*b for a,b in zip(A_row, B_col)) for B_col in zip(*B)] for A_row in A]
ans = dot(A,B)
print(ans)
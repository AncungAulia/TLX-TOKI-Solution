banyak_A = input()
list_A = banyak_A.split()
list_A = [int(A) for A in list_A]
x = list_A[0]
y = list_A[1]

if x >= y:
    print("YES")
else:
    print("NO")
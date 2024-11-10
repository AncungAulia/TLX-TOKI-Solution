N = int(input())
banyak_A = input()
list_A = banyak_A.split()
list_A = [int(A) for A in list_A]
situasi = False
for A in list_A:
    if A % 2 == 0:
        situasi = True

if situasi:
    print("YA")
else:
    print("TIDAK")


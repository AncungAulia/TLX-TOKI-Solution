N = int(input())
mentah_A = input()
list_A = mentah_A.split()
list_A = [int(A) for A in list_A]

# Cek apakah semua elemen sama
if len(set(list_A)) == 1:
    print("EQUAL")
else:
    nondecreasing = True
    nonincreasing = True

    for i in range(len(list_A) - 1):
        if list_A[i] < list_A[i + 1]:
            nonincreasing = False
        elif list_A[i] > list_A[i + 1]:
            nondecreasing = False

    # Cek kondisi
    if nondecreasing:
        print("NONDECREASING")
    elif nonincreasing:
        print("NONINCREASING")
    else:
        print("NONE")

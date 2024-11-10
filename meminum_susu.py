data = input()
list_N_X_Y = data.split()
list_N_X_Y = [int(N_X_Y) for N_X_Y in list_N_X_Y]
N = list_N_X_Y[0]
X = list_N_X_Y[1]
Y = list_N_X_Y[2]

def cara1(N):
    jumlah1 = N
    return jumlah1

def cara2(N,X,Y):
    if N % Y == 0:
        jumlah2 = (N/Y)*X
        return jumlah2
    return 0
    
def cara3(N,X,Y):
    jumlah_bungkus = (N//Y)*X
    jumlah_pcs = (N%Y)
    jumlah3 = jumlah_bungkus + jumlah_pcs
    return jumlah3

hasil1 = cara1(N)
hasil2 = cara2(N,X,Y)
hasil3 = cara3(N,X,Y)

list_hasil = [hasil1, hasil2, hasil3]
list_hasil.sort()
print(list_hasil[2])
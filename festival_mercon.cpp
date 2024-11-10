#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    long long total = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        // Cek apakah A[i] dan B[i] untuk menentukan genap/ganjil
        if (A[i] % 2 == 0) {
            // Jika A[i] genap, A[i]^B[i] pasti genap
            total += 0; // tidak menambah nilai genap
        } else {
            // Jika A[i] ganjil
            if (B[i] % 2 == 0) {
                total += 0; // A[i]^B[i] genap
            } else {
                total += 1; // A[i]^B[i] ganjil
            }
        }
    }
    if(total % 2 == 0){
        cout << "0";
    }else{
        cout << "1";
    }
}

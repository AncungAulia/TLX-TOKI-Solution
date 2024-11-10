#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int hasil = 1;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            hasil *= (A[i]^A[j]);
        }
    }
    cout << hasil;
    return 0;
}
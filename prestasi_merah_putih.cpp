#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, X;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    cin >> X;
    for(int i = 0; i < N; i++){
        if(A[i] == X){
            cout << i+1;
        }
    }
}
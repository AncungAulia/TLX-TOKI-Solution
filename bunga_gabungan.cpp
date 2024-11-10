#include<iostream>
using namespace std;

int main(){
    int p,q;
    cin >> p >> q;
    int bunga_p = p*p;
    int bunga_q = q*q;
    int total_bunga = bunga_p + bunga_q + 1;
    if(total_bunga % 4 == 0){
        cout << total_bunga/4;
    }else{
        cout << -1;
    }
    return 0;
}
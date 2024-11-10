#include<iostream>
using namespace std;

int main(){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    // total nilai maks = 50
    if((N-X) + 2*(M-Y) > 25){
        cout << "LOLOS";
    }else{
        cout << "TIDAK LOLOS";
    }
}
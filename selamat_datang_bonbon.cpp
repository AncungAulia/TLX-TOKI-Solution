#include<iostream>
using namespace std;

int main(){
    long long X, Y, Z, after_diskon, after_pajak;
    cin >> X >> Y >> Z;
    after_diskon = X - (X*Y/100);
    after_pajak = after_diskon + (after_diskon * Z/100);
    cout << after_pajak;
    return 0;
}
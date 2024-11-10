#include<iostream>
using namespace std;

int main(){
    int nilai[3];
    for(int i = 0; i < 3; i++){
        cin >> nilai[i];
    }
    int nilai_max = nilai[0];
    for(int i = 0; i < 3; i++){
        if(nilai_max < nilai[i]){
            nilai_max = nilai[i];
        }
    }
    if(nilai_max % 4 == 0){
        cout << "YA";
    }else{
        cout << "TIDAK";
    }
}
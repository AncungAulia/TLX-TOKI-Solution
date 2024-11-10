#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    string perintah;
    cin >> perintah;
    for(int i = 0; i < perintah.length(); i++){
        if(perintah[i] == 'R'){
            x+=1;
        }
        if(perintah[i] == 'L'){
            x-=1;
        }
        if(perintah[i] == 'U'){
            y+=1;
        }
        if(perintah[i] == 'D'){
            y-=1;
        }
    }
    cout << x << " " <<  y;
}
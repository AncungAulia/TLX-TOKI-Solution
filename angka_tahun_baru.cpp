#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N < 7 && N > 1){
        bool temp = true;
            for(int i = 2; i*i <= N; i++){
                if(N % i == 0){
                temp = false;
                break;
             }
            }
             if(temp == true){
                cout << "YES";
             }else{
                cout << "NO";
             }        
    }
    else{
        cout << "NO";
    }
    return 0;
  }

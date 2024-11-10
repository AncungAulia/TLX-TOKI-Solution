#include<iostream>
#include<string>
using namespace std;

int main(){
    int bilangan;
    cin >> bilangan;
    string str_bilangan = to_string(bilangan);
    bool ada_0 = false;
    for(char angka : str_bilangan){
        if(angka == '0'){
            ada_0 = true;
            break;
        }
    }
    if(ada_0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
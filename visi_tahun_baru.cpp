#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string S, T;
    cin >> S;
    cin >> T;
    for(char &str_S : S){
        str_S = tolower(str_S);
    }
    for(char &str_T : T){
        str_T = tolower(str_T);
    }
    if(S == T){
        cout << "20/20";
    }else{
        cout << "x_x";
    }
}
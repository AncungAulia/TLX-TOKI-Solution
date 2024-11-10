#include<iostream>
#include<string>

using namespace std;

int main(){
    int N;
    string name;
    cin >> N;
    cin >> name;
    for(int i = 0; i < name.length()-1; i++){
        if(name[i] == name[i+1]){
            name.erase(i+1, 1);
            i--;
        }
    }
    cout << name << endl;
    return 0;
}
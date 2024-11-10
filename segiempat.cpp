#include<iostream>
using namespace std;

int main(){
    int N, M, A, B;
    cin >> N >> M;
    cin >> A >> B;
    
    // Hitung untuk orientasi A × B
    int orientasi1 = (N / A) * (M / B);
    
    // Hitung untuk orientasi B × A
    int orientasi2 = (N / B) * (M / A);
    
    // Pilih nilai maksimal dari dua orientasi
    int segiempat = max(orientasi1, orientasi2);
    
    cout << segiempat << endl;
    return 0;
}

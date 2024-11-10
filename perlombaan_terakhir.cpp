#include <iostream>
#include <string>
using namespace std;

int main() {
    string lomba;
    cin >> lomba;

    int hitung_O = 0;

    // Hitung jumlah 'O' dalam string
    for (char ch : lomba) {
        if (ch == 'O') {
            hitung_O++;
        }
    }

    // Cek apakah jumlah 'O' sama dengan 1
    if (hitung_O == 1) {
        cout << "Ya";
    } else {
        cout << "Tidak";
    }

    return 0;
}

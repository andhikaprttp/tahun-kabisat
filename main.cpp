#include <iostream>
using namespace std;

int main() {
    int tahun;
    cout << "==[ Program Cek Tahun Kabisat]==\n";
    cout << "Masukkan tahun: ";
    cin >> tahun;

    // andhika pratama putra

    if (tahun % 4 == 0) {
        if (tahun % 100 == 0) {
            if (tahun % 400 == 0)
                cout << tahun << " adalah tahun kabisat.";
            else
                cout << tahun << " bukan tahun kabisat.";
        }
        else
            cout << tahun << " adalah tahun kabisat.";
    }
    else
        cout << tahun << " bukan tahun kabisat.";

    return 0;
}


#include <iostream>

using namespace std;
string ganjil_genap(int angka) {
    if (angka % 2 == 0) {
    return "genap";
    }
    return "ganjil";
}

string kelipatan_tiga(int angka) {
    if (angka % 3 == 0) {
    return "kelipatan 3";
    }
    return "bukan kelipatan 3";
}
int main() {
    int angka;
    cout << "masukkan bilangannya: ";
    cin >> angka;
    cout << angka << " adalah bilangan " << ganjil_genap(angka) << endl;
    cout << angka << " itu " << kelipatan_tiga(angka) << endl;
    return 0;
}

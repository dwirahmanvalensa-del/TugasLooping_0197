#include <iostream>
using namespace std;

int angka;
int pilihan;
string hasil;

bool cekPrima(int n) {
    if (n <= 1)
    return false;
    int i = 2;
    while (i < n) {
        if (n % i == 0)
        return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
    if (n < 0) 
    return false;
    int a = 0, b = 1;
    while (a < n) {
        int simpan = a + b;
        a = b;
        b = simpan;
    }
    if (a == n) return true;
    else return false;
}

void tampilkanMenu() {
    cout << "\n====== MENU PILIHAN ======" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "---------------------------" << endl;
    cout << "Pilih Menu = ";
}

void inputAngka() {
    cout << "Masukkan Angka = ";
    cin >> angka;
}

void tampilkanHasil() {
    cout << "Hasil Analisis = " << hasil << endl;
    cout << "---------------------------" << endl;
}

int main() {}


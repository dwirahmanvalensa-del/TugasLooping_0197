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

#include <iostream>
using namespace std;

int main()
{
    int jumlahUang, uang10ribu, uang5ribu, uang1ribu, uang100;

    cout << "Masukkan jumlah uang: ";
    cin >> jumlahUang;

    uang10ribu = jumlahUang / 10000;
    jumlahUang = jumlahUang % 10000;

    uang5ribu = jumlahUang / 5000;
    jumlahUang = jumlahUang % 5000;

    uang1ribu = jumlahUang / 1000;
    jumlahUang = jumlahUang % 1000;

    uang100 = jumlahUang / 100;

    cout << uang10ribu << " x 10.000" << endl;
    cout << uang5ribu << " x 5.000" << endl;
    cout << uang1ribu << " x 1.000" << endl;
    cout << uang100 << " x 100" << endl;

    return 0;
}
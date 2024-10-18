#include <iostream>

using namespace std;

int main()
{
    int gio;
    cout << "Nhap gio: ";
    cin >> gio;

    int phut;
    cout << "Nhap phut: ";
    cin >> phut;

    int giay;
    cout << "Nhap giay: ";
    cin >> giay;

    int ketQua = gio * 3600 + phut * 60 + giay;
    cout << "ket qua: " << ketQua << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    const int namHienTai = 2023;

    int namSinh;
    cout << "Nhap nam sinh: ";
    cin >> namSinh;

    int ketQua = namHienTai - namSinh;
    cout << "ket qua: " << ketQua << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int soThuNhat;
    cout << "Nhap so thu 1: ";
    cin >> soThuNhat;

    int soThuHai;
    cout << "Nhap so thu 2: ";
    cin >> soThuHai;

    int soThuBa;
    cout << "Nhap so thu 3: ";
    cin >> soThuBa;

    int soThuTu;
    cout << "Nhap so thu 4: ";
    cin >> soThuTu;

    int tongBonSo = soThuNhat + soThuHai + soThuBa + soThuTu;
    float ketQua = tongBonSo / 4.0;
    cout << "ket qua: " << ketQua << endl;

    return 0;
}
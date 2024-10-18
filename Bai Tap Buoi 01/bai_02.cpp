#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int soThuNhat;
    cout << "Nhap so thu 1: ";
    cin >> soThuNhat;

    int soThuHai;
    cout << "Nhap so thu 2: ";
    cin >> soThuHai;

    int tong = soThuNhat + soThuHai;
    cout << "ket qua phep tong: " << tong << endl;

    int tru = soThuNhat - soThuHai;
    cout << "ket qua phep tru: " << tru << endl;

    int nhan = soThuNhat * soThuHai;
    cout << "ket qua phep nhan: " << nhan << endl;

    if (soThuHai != 0)
    {
        float thuong = float(soThuNhat) / soThuHai;
        cout << "ket qua phep chia: " << thuong << endl;

        float chiaSoNguyen = soThuNhat / soThuHai;
        cout << "ket qua phep chia so nguyen: " << chiaSoNguyen << endl;

        float chiaLayDu = soThuNhat % soThuHai;
        cout << "ket qua phep chia lay du: " << chiaLayDu << endl;

        float ketQuaChiaLamTron = round(thuong * 1e3) / 1e3;
        cout << "ket qua phep chia lam tron 3 chu so: " << ketQuaChiaLamTron << endl;
    } else {
         cout << "phep chia so thu 2 phai khac 0" << endl;
    }

    return 0;
}
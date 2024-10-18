#include <iostream>

using namespace std;

int main()
{
    int soNguyen;
    cout << "Nhap nguyen: ";
    cin >> soNguyen;

    int soThuNhat = soNguyen / 10;
    int soThuHai = soNguyen % 10;

    cout << "Ket qua: " << soThuNhat + soThuHai << endl;

    return 0;
}
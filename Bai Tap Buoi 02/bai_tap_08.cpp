#include<iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    float chuVi, dienTich, banKinh;
    cout << "Nhap ban kinh: ";
    cin >> banKinh;
    chuVi = 2*PI*banKinh;
    dienTich = PI*banKinh*banKinh;
    cout << "Chu vi hinh tron la: " << chuVi << endl;
    cout << "Dien tich hinh tron la: " << dienTich << endl;
    return 0;
}
#include <iostream>
using namespace std;

/*
Viet ham kiem tra so n co phai la so chinh phuong
Input:
+ n: int
Output:
+ bool => return True(so CP), False (ko false)
*/

/*
Input:
 +
Output:
 +
*/

/* Viet ham tinh chu vi va dien tich hinh chu nhat khi biet do dai 2 canh.
Input:
 + a: float
 + b: float
Output:
 + chu_vi => return
 + dien_tich: float&
*/

float tinhChuVi_DienTich(float a, float b, float& dien_tich)
{
    float chu_vi = (a+b)*2;
    dien_tich = a*b;
    return chu_vi;
}

bool kiemTraSoChinhPhuong(int n)
{
    retrun false
}

int main()
{
    cout << "Test: 1. Kiem tra so chinh phuong: " << endl;
    bool kq = kiemTraSoChinhPhuong(20);
    cout << "\tKet qua kiem 20(0) " << kq << endl;
    cout << "\tKet qua kiem 16(1) " << kiemTraSoChinhPhuong(20) << endl;

    cout << endl;
    cout << "Test: 2. Tinh chu vi, dien tich" << tinhChuVi_DienTich(3, 5, dienTich) << endl;
    return 0;
}
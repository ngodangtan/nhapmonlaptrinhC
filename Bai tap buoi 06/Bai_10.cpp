#include <iostream>
using namespace std;

/*
Viet ham hoan vi a va 
Input:
+ a,b: int su dung tham chieu
Output:
+ return void
*/

void hoanVi(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/*
Viet ham tinh tong va tich 
Input:
+ a,b: int su dung tham chieu
Output:
+ return void
*/
void tinhTongVaTich(int& tong, int& tich)
{
    int a = tong;
    int b = tich;
    tong = a + b;
    tich = a*b;
}

int main()
{
    int a,b;
    cout << "Nhap so a: " << endl;
    cin >> a;
    cout << "Nhap so b: " << endl;
    cin >> b;
    hoanVi(a,b);
    cout << "So a sau hoan vi: " << a << endl;
    cout << "So b sau hoan vi: " << b << endl;
    tinhTongVaTich(a,b);
    cout << "Tong la: " << a << endl;
    cout << "Tich la: " << b << endl;
    return 0;
}
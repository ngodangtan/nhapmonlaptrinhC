#include <iostream>
using namespace std;

/*
Viet ham tinh tong s(n) = 1/2 + 2/3 + ... + n/n+1
Input:
+ n: int
Output:
+ return double => ket qua
*/
double tinhTong1(int n) 
{
    double kq;
    for (int i = 0; i <= n; i++)
    {
        kq += i/(i+1);
    }
    
    return kq;
}

/*
Viet ham tinh tong s(n) = 1 + 1/3 + 1/5 + ... + 1/2*n+1
Input:
+ n: int
Output:
+ return double => ket qua
*/
double tinhTong2(int n)
{
    double kq;
    for (int i = 0; i <= n; i++)
    {
       kq += 1/(2*i+1);
    }
    
    return kq;
}

int main()
{
    int n,kq1,kq2;
    cout << "Nhap n: " << endl;
    cin >> n;
    kq1 = tinhTong1(n);
    kq2 = tinhTong2(n);
    cout << "Ket qua bieu thuc 1: " << kq1 << endl;
    cout << "Ket qua bieu thuc 2: " << kq2 << endl;
    return 0;
}
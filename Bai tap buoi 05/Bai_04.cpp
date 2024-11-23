#include <iostream>
using namespace std;

int chuViHCN(int : a, int b)
{
    int chuVi = 2 * (a + b);
    return chuVi;
}

int dienTichHCN(int : a, int : b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Nhap canh a: " << end;
    cin >> a;

    cout << "Nhap canh b: " << end;
    cin >> a;

    int chuVi = chuViHCN(a, b);
    int dienTich = dienTichHCN(a, b);
    
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
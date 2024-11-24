#include <iostream>
using namespace std;

int chuViHCN(int a, int b)
{
    int chuVi = 2 * (a + b);
    return chuVi;
}

int dienTichHCN(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Nhap canh a: " << endl;
    cin >> a;

    cout << "Nhap canh b: " << endl;
    cin >> a;

    int chuVi = chuViHCN(a, b);
    int dienTich = dienTichHCN(a, b);
    
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
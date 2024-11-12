#include <iostream>
using namespace std;

void nhap()
{
    int a;
    do
    {
        cout << "Nhap gia tri: ";
        cin >> a;
    } while (a <= 0);

    cout << "Gia tri hop le: " << a << endl;
}

int main()
{
    int a = nhap();
    int b = nhap();
    int c = nhap();

    cout << "Cac gia tri hop le: " << a << b << c << endl;
    return 0;
}
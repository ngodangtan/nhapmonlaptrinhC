#include <iostream>
using namespace std;

int a = 10; // Global variable

void funca()
{
    int x = 3;
    int i = 0;
    for (int i = 0; i < x; i++)
    {
        cout << "10. i = " << i << endl;
    }

    cout << x << endl;
    cout << "8. i" << i << endl;
    cout << "Toan cuc a: " << a << endl;
    a = 20;
}

void funcb()
{
    int x = -369;
    if (x > 7)
    {
        int y = 10;
    }
    else
    {
    }

    cout << x << endl;
    // cout << y << endl; Khong goi duoc do y cuc bo trong if
}

void funcC()
{
    int a = 20;
    cout << "goi a trong C: " << a << endl;
    cout << "goi a global variable trong C: " << ::a << endl;
    ::a = 30;
}

int main()
{
    int x = 678;
    funca();
    funcC();
    cout << "Toan cuc a trong main: " << a << endl;
    return 0;
}
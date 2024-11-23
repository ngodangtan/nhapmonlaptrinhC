#include <iostream>
using namespace std;

bool isTamGiacDeu(int a, int b, int c)
{
    if (a == b && a == b && a == c)
    {
        if (b == c)
        {
            return true;
        }
    }
    return false;
}

bool isTamGiacCan(int a, int b, int c)
{
    if (a == b || a == c || b == c)
    {
        return true;
    }

    return false;
}

bool isTamGiacVuong(int a, int b, int c)
{
    return a * a + b * b == c * c;
}

bool isTamGiacVuongCan(int a, int b, int c)
{
    if (isTamGiacVuong(a, b, c))
        return a == b;

    return false;
}

int main()
{
    int a, b, c;
    cout << "Nhap canh a: " << endl;
    cin >> a;
    cout << "Nhap canh b: " << endl;
    cin >> b;
    cout << "Nhap canh c: " << endl;
    cin >> c;

    if (isTamGiacCan(a, b, c))
    {
        cout << "Tam Giac can" << endl;
    }
    else if (isTamGiacDeu(a, b, c))
    {
        cout << "Tam giac deu" << endl;
    }
    else if (isTamGiacVuong(a, b, c))
    {
        if (isTamGiacVuongCan)
        {
            cout << "Tam giac vuong can" << endl;
        }

        cout << "Tam giac vuong" << endl;
    }
    else
    {
        cout << "Tam giac thuong" << endl;
    }

    return 0;
}
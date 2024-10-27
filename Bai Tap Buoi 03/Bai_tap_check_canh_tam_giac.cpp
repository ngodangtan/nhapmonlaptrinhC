#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap so a: " << endl;
    cin >> a;
    cout << "Nhap so b: " << endl;
    cin >> b;
    cout << "Nhap so c: " << endl;
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "a, b, c la 3 canh cua mot tam giac." << endl;
    }
    else
    {
        cout << "a, b, c khong phai la 3 canh cua mot tam giac." << endl;
        return 0;
    }

    if (a == b && b == c)
    {
        cout << "Day la tam giac deu." << endl;
    }
    // Kiểm tra tam giác cân
    else if (a == b || b == c || a == c)
    {
        cout << "Day la tam giac can." << endl;
    }
    // Kiểm tra tam giác vuông
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
             pow(a, 2) + pow(c, 2) == pow(b, 2) ||
             pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        cout << "Day la tam giac vuong." << endl;
    }
    else
    {
        cout << "Day la tam giac thuong." << endl;
    }
    return 0;
}
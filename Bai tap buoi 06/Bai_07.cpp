#include <iostream>
#include <cmath>
using namespace std;

/*
Viet ham tinh delta cua pt bac 2
Input:
+ a,b,c: double
Output:
+ return double => gia tri delta
*/
double tinhDelta(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

void giaiPhuongTrinhBac2(double a, double b, double c)
{
    double delta = tinhDelta(a, b, c);
    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }
    else if (delta == 0)
    {
        double x = -b / 2 * a;
        cout << "x: " << x << endl;
    }
    else
    {
        cout << "phuong trinh vo nghiem" << endl;
    }
}

int main()
{
    double a, b, c;
    cout << "Nhap so a: " << endl;
    cin >> a;
    cout << "Nhap so b: " << endl;
    cin >> b;
    cout << "Nhap so c: " << endl;
    cin >> c;
    giaiPhuongTrinhBac2(a,b,c);
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    double a, b, x;
    cout << "Nhap hang so a: " << endl;
    cin >> a;
    cout << "Nhap hang so b: " << endl;
    cin >> b;
    if(a==0) {
        cout << "a phai khac 0" << endl;
        return 0;
    }

    x = -b/a;
    cout << "Gia tri x: " << x << endl;
    return 0;
}
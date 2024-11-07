#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;

    for (; n < 0; )
    {
        cout << "Nhap lai n = ";
        cin >> n;
    }

cout << "Gia tri hop le n = " << n << endl;
    return 0;
}
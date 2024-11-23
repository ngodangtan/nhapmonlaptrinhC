#include <iostream>
using namespace std;

bool isUocSo(int : n)
{
    if (n % i == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, tong, tich;
    cout << "Nhap so n: " << endl;
    cin >> n;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (isUocSo(i))
        {
            tong += i;
            tich *= i;
        }
        
    }

    cout << "Tong la: " << tong << endl;
    cout << "Tich la: " << tich << endl;
    return 0;
}
#include <iostream>
using namespace std;

bool isSoLe(int n)
{
    if (n % 2 == 0)
        return false;
    return true;
}

int tongDeQuy(int n)
{
    if(n==1)
        return 1;
    
    return n + tongDeQuy(n-1);
}

int main()
{
    int n,tongCach1,tongCach2;
    do
    {
        cout << "Nhap so le n: " << endl;
        cin >> n;
        if (!isSoLe(n))
            cout << "Ban phai nhap so le" << endl;
    } while (!isSoLe(n));

    for (int i = 1; i <= n; i++)
    {
        tongCach1 += i;
    }
    
    cout << "Tong cach 1: " << tongCach1 << endl;
    tongCach2 = tongDeQuy(n);
    cout << "Tong cach 2: " << tongCach2 << endl;

    return 0;
}
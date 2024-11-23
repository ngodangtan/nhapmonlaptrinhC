#include <iostream>
using namespace std;

/*
Viet ham dao so
Input:
+ n: int
Output:
+ return int => so dao nguoc
*/
int daoSo(int n)
{
    int soDaoNguoc = 0;
    while (n!=0)
    {
       int chuso = n%10;
       soDaoNguoc=soDaoNguoc*10+chuso;
       n=n/10;

    }
    
    return soDaoNguoc;
}

int main()
{
    int n,kq;
    cout << "Nhap so n" << endl;
    cin >> n;
    kq = daoSo(n);
    cout << "So Dao nguoc la: " << kq << endl;
    return 0;
}
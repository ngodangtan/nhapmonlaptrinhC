#include <iostream>
using namespace std;

bool kiemTraSoCP(int);
bool kiemTraSoNT(int);
int tongNT(int);

int main()
{
    cout << "Test 1.1. So chinh phuong -1(0) = " << kiemTraSoCP(-1) << endl;
    cout << "Test 1.1. So chinh phuong 0(1) = " << kiemTraSoCP(0) << endl;
    cout << "Test 1.1. So chinh phuong 1(1) = " << kiemTraSoCP(1) << endl;
    cout << "Test 1.1. So chinh phuong 2(0) = " << kiemTraSoCP(2) << endl;
    cout << "Test 1.1. So chinh phuong 4(1) = " << kiemTraSoCP(4) << endl;
    cout << "Test 1.1. So chinh phuong 9(1) = " << kiemTraSoCP(9) << endl;
    cout << "Test 1.1. So chinh phuong 89(0) = " << kiemTraSoCP(89) << endl;

    cout << endl;
    cout << "Test 1.2. So nguyen to -1(0) = " << kiemTraSoNT(-1) << endl;
    cout << "Test 1.2. So nguyen to 0(0) = " << kiemTraSoNT(0) << endl;
    cout << "Test 1.2. So nguyen to 1(0) = " << kiemTraSoNT(1) << endl;
    cout << "Test 1.2. So nguyen to 2(1) = " << kiemTraSoNT(2) << endl;
    cout << "Test 1.2. So nguyen to 3(1) = " << kiemTraSoNT(3) << endl;
    cout << "Test 1.2. So nguyen to 4(0) = " << kiemTraSoNT(4) << endl;
    cout << "Test 1.2. So nguyen to 7(1) = " << kiemTraSoNT(7) << endl;
    cout << "Test 1.2. So nguyen to 9(0) = " << kiemTraSoNT(9) << endl;

    cout << endl;
    cout << "Test 2.1. Tong NT < hon 10(" << "(2+3+5+7)" << ") = " << tongNT(10) << endl;
    cout << "Test 2.1. Tong NT < hon 19(" << "(2+3+5+7+11+13+17)" << ") = " << tongNT(19) << endl;
    return 0;
}

/*
Viet ham kiem tra so n co phai la so chinh phuong
Input:
+ n: int
Output:
+ bool => return True(so CP), False (ko false)
*/

bool kiemTraSoCP(int n)
{
    // Buoc 1:
    if (n <= 0)
        return false;
    // Buoc 2: (i=0)^2 , 1,2,3,4..     == n
    for (int i = 0; i * i <= n; i++)
    {
        if (i *i = n)
            return true;
    }
    return false;
}

/*
Viet ham kiem tra so n co phai la so chinh nguyen to
Input:
+ n: int
Output:
+ bool => return True(so CP), False (ko false)
*/

bool kiemTraSoNT(int n)
{
    // Buoc 1
    if (n <= 1)
        return false;
    // Buoc 2: 2 -----> n-1
    for (int i = 2; i * i <= n - 1; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

/*
Viet ham tinh tong cac so nguyen to nho hon n
Input:
+ n: int
Output:
+ return int
*/

int tongNT(int n)
{
    int t = 0;
    for (int i = 1; i < n; i++)
    {
        if (kiemTraSoNT(i))
            t += i;
    }

    return t;
}
#include <iostream>
using namespace std;

/* Viet ham kiem tra so n nhap vao co phai so nguyen to.
Input:
 + n: int
Output:
 + return true => so nguyen to
 + return false => khong phai so nguyen to
*/
bool isSoNguyenTo(int : n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}

/* Viet ham kiem tra so n nhap vao co phai so chinh phuong.
Input:
 + n: int
Output:
 + return true => so chinh phuong
 + return false => khong phai so chinh phuong
*/
bool isSoChinhPhuong(int : n)
{
    if (n < 0)
    {
        return false;
    }
    int soCanBac2 = sqrt(n);
    if (soCanBac2 * soCanBac2 == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, tongSoNguyenTo;
    int tongSoChinhPhuong;
    for (int i = 0; i < n; i++)
    {
        if (isSoNguyenTo(i))
        {
            tongSoNguyenTo += i;
        }

        if (isSoChinhPhuong(i))
        {
            tongSoChinhPhuong += i;
        }
    }

    cout << "Tong so nguyen to nho hon n: " << tongSoNguyenTo << endl;
    cout << "Tong so chinh phuong nho hon n: " << tongSoChinhPhuong << endl;
    return 0;
}
#include<iostream>
using namespace std;

/* Viet ham kiem tra so n nhap vao co phai so nguyen to.
Input:
 + n: int
Output:
 + return true => so nguyen to
 + return false => khong phai so nguyen to
*/
bool isSoNguyenTo(int: n) {
    if(n<=1) {
        return false;
    }

    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        return true;
    }
    
}

int main()
{
    int n;
    cout << "Nhap so n:" << endl;
    cin >> n
    if (isSoNguyenTo(n))
    {
        cout << "Day la so nguyen to" << endl;
    } else {
        cout << "Day khong phai la so nguyen to" << endl;
    }
    
    return 0;
}
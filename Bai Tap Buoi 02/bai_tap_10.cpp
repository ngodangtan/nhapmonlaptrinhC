#include<iostream>
using namespace std;

int main()
{
    int soXe;
    int tongNut = 0;
    cout << "Nhap vao so xe gom 5 chu so: " << endl;
    cin >> soXe;

    // kiem tra so xe nhap co dung 5 chu so hay khong
    if(soXe < 10000 || soXe > 99999) {
        cout << "Ban nhap khong dung dinh dang so xe" << endl;
    } else {
        // chay vong while
        // lay so cuoi cung + vao tong
        // sau do so xe se bo so cuoi cung
        while (soXe > 0)
        {
            tongNut += soXe % 10;
            soXe /= 10;
        }
        cout << "Tong nut la: " << tongNut << endl;
    }

    return 0;
}
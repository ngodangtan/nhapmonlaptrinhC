#include <iostream>
using namespace std;

int main()
{
    int gio, phut, giay = 0;
    cout << "Nhap he so gio, phut, giay theo thu tu: ";
    cin >> gio >> phut >> giay;
    if(gio < 0 || gio > 23) {
        cout << "Khong hop le";
        return 0;
    }

    if(phut < 0 || phut > 59) {
        cout << "Khong hop le";
        return 0;
    }

    if(giay < 0 || giay > 59) {
        cout << "Khong hop le";
        return 0;
    }

    cout << "Hop le";
    return 0;
}
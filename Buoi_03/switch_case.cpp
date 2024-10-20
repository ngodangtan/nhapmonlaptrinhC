#include <iostream>
using namespace std;

int main()
{
    int chon;
    cout << "Nhap lua chon: ";
    cin >> chon;

    cout << "\nBan da chon dich vu: ";
    switch(chon)
    {
        case 1:
            cout << "Dang ky 5G khong gioi han" << endl;
            break;

        case 2:
            cout << "Dang ky nhac cho" << endl;
            break;

        case 3:
            cout << "Dang ky cuoc goi nho" << endl;
            break;

        default:
            cout << "Lua chon cua ban ngoai danh sach" << endl;
    }
    return 0;
}
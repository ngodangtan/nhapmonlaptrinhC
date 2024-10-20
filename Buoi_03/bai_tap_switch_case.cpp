#include <iostream>
using namespace std;

int main()
{
    char diem;
    cout << "Nhap diem (A, B, C, D, E): ";
    cin >> diem;

    cout << "\nXep loai: ";
    switch (diem)
    {
        case 'A':
            cout << "Xuat sac" << endl;
            break;

        case 'B':
            cout << "Gioi" << endl;
            break;

        case 'C':
            cout << "Kha" << endl;
            break;

        case 'D':
            cout << "Trung binh" << endl;
            break;

        case 'E':
            cout << "Yeu" << endl;
            break;

        default:
            cout << "Ky tu khong hop le!" << endl;
    }

    return 0;
}
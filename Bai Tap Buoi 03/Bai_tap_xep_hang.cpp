#include <iostream>
using namespace std;

int main()
{
    char thuHang;
    cout << "Nhap thu hang: " << endl;
    cin >> thuHang;
    // Dung switch case se make sense hon
    switch (thuHang)
    {
    case 'A':
        printf("Xuất sắc");
    case 'B':
        printf("Giỏi");
    case 'C':
        printf("Khá");
    case 'D':
        printf("Trung Bình");
    case 'E':
        printf("Yếu");
    default:
        printf("Bạn nhập thứ hạng không hợp lệ, try again!");
    }
    return 0;
}
//
// Created by Felix Ngo on 15/12/24.
//
#include <iostream>
using namespace std;

int main()
{
    int x = 10; // Biến nguyên x với giá trị 10
    double y = 3.34; // Biến số thực y với giá trị 3.34

    // Xuất địa chỉ của biến x bằng cout
    cout << "Dia chi bien x: " << &x << endl;

    // Xuất địa chỉ của biến x bằng printf
    printf("Dia chi bien x: %p hoac %x\n", &x, &x);

    // Lấy dữ liệu từ địa chỉ của biến x
    cout << "Lay du lieu: " << *(&x) << endl;

    // Gán con trỏ p trỏ đến địa chỉ của biến x
    int* p = &x;
    double* p1 = &y;

    return 0;
}
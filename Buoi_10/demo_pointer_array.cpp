//
// Created by Felix Ngo on 15/12/24.
//

#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 5, 8, 1, 6};

    // Xuất địa chỉ của mảng
    cout << "Dia chi mang: " << a << endl;

    // Xuất địa chỉ từng phần tử trong mảng
    for (int i = 0; i < 5; i++) {
        cout << "Dia chi phan tu a[" << i << "]: " << &a[i] << endl;
    }

    // Khai báo con trỏ trỏ đến phần tử thứ 2 (chỉ số 1) của mảng
    int* p = &a[1];

    // Lấy giá trị của phần tử mà con trỏ trỏ tới, cộng thêm 2
    cout << "Gia tri: " << *p + 2 << endl;

    return 0;
}
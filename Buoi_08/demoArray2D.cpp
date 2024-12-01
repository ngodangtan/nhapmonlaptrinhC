//
// Created by Felix Ngo on 1/12/24.
//

#include <iostream>
using namespace std;

const int DONG = 5;
const int COT = 6;

void printArray(int a[][COT], int dong, int cot) {
    cout << "\nArray[" << dong << "][" << cot << "]" << endl;
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
}

void cinArray(int b[][COT], int& dong_b, int& cot_b) {
    cout << "Ban muon nhap bao nhieu dong: ";
    cin >> dong_b;

    cout << "Ban muon nhap bao nhieu cot: ";
    cin >> cot_b;

    for (int i = 0; i < dong_b; i++) {
        for (int j = 0; j < cot_b; j++) {
            cout << "\tNhap [" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }
}

/* Yêu cầu: Viết hàm tìm một giá trị x có trong mảng hay không?
Phân tích:
Input:
+ Mảng 2D a       => int a[][COT]
+ Số lượng dòng   => int dong
+ Số lượng cột    => int cot
+ Giá trị x cần tìm => int x

Output:
True/false  => return bool
*/

bool searchValue(int a[][COT], int dong, int cot, int value) {
    for (int i = 0; i < dong; i ++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == value) {
                return true;
            }
        }
    }

    return false;
}

/* Yêu cầu: Viết hàm tìm các giá trị dương có trong mảng?
Phân tích:

Input:
+ Mảng 2D a         => int a[][COT]
+ Số lượng dòng     => int dong
+ Số lượng cột      => int cot

Output:
+ mảng 1D lưu các giá trị dương => int kq[]
+ số lượng mảng kq              => int& sl_kq;
*/

void timeGTDuong(int a[][COT], int dong, int cot, int kq[], int& sl_kq) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] > 0) {
                kq[sl_kq] = a[i][j]; // Lưu giá trị dương vào mảng kq
                sl_kq++;             // Tăng số lượng phần tử
            }
        }
    }
}

int main() {
    int a[DONG][COT] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13,19},
    };

    cout << a[2][1] << endl;
    a[2][1] = 10;
    a[2][1] = a[1][1] - a[2][1];
    cout << a[2][1] << endl;

    int dong = 3;
    int cot = 4;
    cout << "Test: 2. In mang:" << endl;
    printArray(a, dong, cot);

    // Nhap gia tri vao mang
    // int b[DONG][COT];
    // int dong_b = 0;
    // int cot_b = 0;
    // cinArray(b,dong_b,cot_b);
    // printArray(b, dong_b, cot_b);

    cout << "\nTest: 3. Tim gia tri co trong mang:" << endl;
    cout << "\tKet qua tim 8(1) = " << searchValue(a,dong,cot,8) << endl;
    cout << "\tKet qua tim 11(1) = " << searchValue(a,dong,cot,11) << endl;
    cout << "\tKet qua tim 14(0) = " << searchValue(a,dong,cot,14) << endl;

    cout << "\nTest: 4. Tim gia tri duong trong mang 2D:" << endl;
    int c[DONG*COT];
    int m = 0;
    timeGTDuong(a,dong,cot,c,m);
    // In kết quả
    cout << "Các giá trị dương trong mảng:\n";
    for (int i = 0; i < m; i++) {
        cout << c[i] << " ";
    }
    return 0;
}

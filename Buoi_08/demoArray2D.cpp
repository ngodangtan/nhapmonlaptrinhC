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

int main() {
    int a[DONG][COT] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13,},
    };

    cout << a[2][1] << endl;
    a[2][1] = 10;
    a[2][1] = a[1][1] - a[2][1];
    cout << a[2][1] << endl;

    int dong = 3;
    int cot = 4;
    printArray(a, dong, cot);

    int b[DONG][COT];
    int dong_b = 0;
    int cot_b = 0;
    cinArray(b,dong_b,cot_b);
    printArray(b, dong_b, cot_b);
    return 0;
}

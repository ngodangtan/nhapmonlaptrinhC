#include <iostream>
using namespace std;

int main() {
    float chieuCao, canNang, bmi;

    cout << "Nhap chieu cao (m): ";
    cin >> chieuCao;

    cout << "Nhap can nang (kg): ";
    cin >> canNang;

    if (chieuCao <= 0) {
        cout << "Chieu cao phai lon hon 0!" << endl;
        return 1;
    }

    bmi = canNang / (chieuCao * chieuCao);
    cout << "Chi so BMI cua ban la: " << bmi << endl;
    return 0;
}
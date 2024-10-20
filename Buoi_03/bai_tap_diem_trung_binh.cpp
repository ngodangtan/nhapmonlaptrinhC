#include <iostream>
using namespace std;

int main() {
    float GPA;

    // Nhập điểm GPA từ người dùng
    cout << "Nhap diem trung binh (GPA): ";
    cin >> GPA;

    // Kiểm tra và hiển thị kết quả xếp hạng
    if (GPA < 3.5) {
        cout << "Hoc luc Kem" << endl;
    } else if (GPA >= 3.5 && GPA < 5.0) {
        cout << "Hoc luc Yeu" << endl;
    } else if (GPA >= 5.0 && GPA < 7.0) {
        cout << "Hoc luc Trung binh" << endl;
    } else if (GPA >= 7.0 && GPA < 8.0) {
        cout << "Hoc luc Kha" << endl;
    } else if (GPA >= 8.0 && GPA < 9.0) {
        cout << "Hoc luc Gioi" << endl;
    } else if (GPA >= 9.0 && GPA <= 10.0) {
        cout << "Hoc luc Xuat sac" << endl;
    } else {
        cout << "GPA khong hop le!" << endl;
    }

    return 0;
}
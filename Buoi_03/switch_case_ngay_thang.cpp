#include <iostream>
using namespace std;

int main() {
    int thang, nam;
    cout << "Nhap thang va nam (cach nhau 1 khoang trang): ";
    cin >> thang >> nam;

    int soNgay;

    // Kiểm tra tháng hợp lệ và xác định số ngày
    if (thang < 1 || thang > 12) {
        cout << "Thang khong hop le!" << endl;
        return 0; // Kết thúc chương trình nếu tháng không hợp lệ
    }

    // Xác định số ngày trong từng tháng
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || 
        thang == 8 || thang == 10 || thang == 12) {
        soNgay = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        soNgay = 30;
    } else { // Tháng 2
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            soNgay = 29; // Năm nhuận
        } else {
            soNgay = 28; // Không phải năm nhuận
        }
    }

    // In kết quả
    cout << "Thang " << thang << " nam " << nam << " co " << soNgay << " ngay." << endl;

    return 0;
}
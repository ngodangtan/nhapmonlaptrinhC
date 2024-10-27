#include <iostream>
using namespace std;

int main()
{
    double soTienGuiNganHang, tongTien;
    int thangGui;
    float laiSuat;
    cout << "Vui long nhap so tien gui ngan hang: "
    cin >> soTienGuiNganHang;
    cout << "Vui long nhap thoi han gui tien(thang): "
    cin >> thangGui;
    if(soTienGuiNganHang <= 0) {
        cout << "So tien ban nhap phai lon hon 0";
        return 0;
    }

    if(thangGui <= 0) {
        cout << "Thang gui phai lon hon 0";
        return 0;
    }

    if(thangGui >= 1 && thangGui <= 12) {
        laiSuat = 0.08;
    } else if (thangGui >= 13 && thangGui <= 24)
    {
        laiSuat = 0.09;
    } else if (thangGui >= 25 && thangGui <= 36) {
        laiSuat = 0.10
    } else if (thangGui >= 37 && thangGui <= 48)
    {
        laiSuat = 0.11;
    } else {
        laiSuat = 0.12
    }

    tongTien = soTienGuiNganHang * (1 + laiSuat);
    cout << "Tong tien sau " << thoiGian << " thang: " << ketQua << " VND" << endl;
    return 0;
}
#include <iostream>
using namespace std;

//Viet ham cong 2 so nguyen a va b

// Cach 3

void cong3(int a, int b) {
    int tong = a + b;

    return tong; // khi return duoc goi thi dung ham va tra ve ket qua
    // co the lay ket qua cua ham tai su dung tiep
}

// cach2
void cong2() {
    int a, b;
    cout << "Nhap a = ";
    cin >> a;

    cout << "Nhap b = ";
    cin >> b;

    int tong = a + b;

    return tong; // khi return duoc goi thi dung ham va tra ve ket qua
    // co the lay ket qua cua ham tai su dung tiep
}

// cach1
void cong1()
{
    int a, b;
    cout << "Nhap a = ";
    cin >> a;

    cout << "Nhap b = ";
    cin >> b;

    int tong = a + b;

    cout << "Tong = " << tong << endl;
    // ham nay chi nhin thay ket qua, ko tai su dung cho cac cong viec tiep theo
    // ham co kieu void cam goi trong cout
}

int main()
{
    // goi cach 3
    int ketqua1 = cong3(2, 4);
    cout << "1. ket qua tong = " << ketqua1 << endl << endl;

    int x = 6, y = 9;
    int ketqua2 = cong3(x, y);
    cout << "2. ket qua tong = " << ketqua2 << endl << endl;

    cout << "3. ket qua tong = " << cong3(4, 5) << endl << endl;

    int a, b;
    cout << "Nhap a = ";
    cin >> a;

    cout << "Nhap b = ";
    cin >> b;

    cout << "4. ket qua tong = " << cong3(a, b) << endl << endl;
    // goi theo cach 2
    // int ketqua = cong2();
    // cout << "ket qua tong = " << ketqua << endl << endl;
    // goi theo cach 1
    // cong1()
    // cong1()
    // return 0;
}
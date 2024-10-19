#include<iostream>
using namespace std;

int main()
{
    char kyTuNhap;
    cout << "Nhap ky tu thuong: " << endl;
    cin >> kyTuNhap;
    if(kyTuNhap >= 'a' && kyTuNhap <= 'z') {
        char kyTuHoa = kyTuNhap - 32;
        cout << "Ky tu hoa: " << kyTuHoa << endl;
    } else {
        cout << "Ky tu nhap khong phai la chu thuong" << endl;
    }

    return 0;
}
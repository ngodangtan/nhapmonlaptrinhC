#include <iostream>

using namespace std;
typedef int MyInt; // tao ten khac tu ten khai sinh

int main()
{
    /*
    Cu phap khai bao bien
    1. <kieu du lieu> ten_bien;
    2. <kieu du lieu> ten_bien = <gia tri>;

    // Kieu so nguyen - int
    10
    2
    9
    // Kieu so thuc - float - double
    9.5
    2.4
    .4
    8e6
    // Kieu ky tu - char
    'a'
    '@'
    // Kieu bool - only true or false
    // void - se hoc buoi sau
    // String se hoc buoi sau
    */

    int x = 10;
    int y = 2;
    int z = 9;
    int v;

    float sampleFloat1;
    float sampleFloat2 = 9.5;
    double sampleDouble1;
    double sampleDouble2 = 9e6; // 9x10^6

    bool isMale;
    bool isWoman = false;

    char kyTu = 's';

    cout << "So nguyen: " << x << endl;
    cout << "So thuc: " << sampleFloat1 << endl;
    cout << "gioi tinh la nu: " << isWoman << endl;
    cout << "ky tu: " << kyTu << endl;

    // nhieu bien tren cung 1 line
    int a1, a2, a3;
    float b1, b2 = 9.4;
    MyInt c1 = 10, c2, c3;

    // toan tu gan
    int tuoi;
    tuoi = 18;
    float heSoLuong = 2.34, luongCB = 1600000;
    //heSoLuong = heSoLuong + 0.33;
    heSoLuong += 0.33;

    float luongHT = luongCB * heSoLuong;
    cout << "He so luong" << heSoLuong << endl << "Tuoi: " << tuoi << endl;
    cout << "Luong Hang Thang: " << luongHT << endl;

    return 0;
}
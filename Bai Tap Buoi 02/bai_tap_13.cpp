#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string ngay ,thang, nam;
    cout << "Nhap ngay sinh: " << endl;
    cin >> ngay;

    cout << "Nhap thang sinh: " << endl;
    cin >> thang;

    cout << "Nhap nam sinh: " << endl;
    cin >> nam;

    cout << "Dinh dang 1" << endl;
    printf("%s/%s/%s\n", ngay.c_str(), thang.c_str(), nam.c_str());

    cout << "Dinh dang 2" << endl;
    int year = atoi(nam.c_str());
    int convertedYear = year % 100;
    printf("%s/%s/%02d\n", ngay.c_str(), thang.c_str(), convertedYear);
    return 0;
}
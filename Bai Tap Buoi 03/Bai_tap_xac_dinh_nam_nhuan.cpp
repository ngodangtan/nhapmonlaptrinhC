#include <iostream>
using namespace std;

int main()
{
    int thang, nam, ngay;
    bool isNamNhuan = false;
    cout << "Nhap vao thang, nam:";
    cin >> thang >> nam;
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        isNamNhuan = true;
    }

    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        ngay = 31;
        break;
    case 4: case 6: case 9: case 11:
        ngay = 30;
        break;
    case 2:
        if(isNamNhuan) 
        {
            ngay = 29;
        }
        else
        {
            ngay = 28;
        }
        break;
    default:
        ngay = 0;
        break;
    }

    if(ngay == 0) {
        cout << "Thang khong hop le";
    } else {
        printf("Thang %d co %d ngay", thang, ngay);
    }
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    // Tao so random tu 1-3 (1: Keo, 2 Bua , 3 Bao)
    int randomNum = rand() % 3 + 1;
    string mayChon;
    string nguoiChon;
    switch (randomNum)
    {
    case 1:
        mayChon = "Kéo" break;
    case 2:
        mayChon = "Búa";
        break;
    default:
        mayChon = "Bao" break;
    }

    cout << "Moi nguoi choi nhap (Kéo, Búa, Bao): ";
    cin >> nguoiChon;

    if (nguoiChon == mayChon)
    {
        return "Hòa!";
    }
    else if ((nguoiChon == "Kéo" && mayChon == "Bao") ||
             (nguoiChon == "Búa" && mayChon == "Kéo") ||
             (nguoiChon == "Bao" && mayChon == "Búa"))
    {
        return "Nguoi thang";
    }
    else
    {
        return "May Thang";
    }
    return 0;
}
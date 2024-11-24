#include <iostream>
using namespace std;

//define SIZE 100;
const int SIZE = 100;

int main()
{
    //1.
    //Hãy lưu trữ số tuổi của các thành viên trong gia đình
    //5 thành viên
    //khai báo 5, 6 biến để lưu
    int tuoiOng, tuoiBa, tuoiCha, tuoiMe, tuoiToi, tuoiVo;

    //2. Lưu trữ tuổi tất cả các tv trong lớp
    //60
    //Mảng giúp chúng ta khai báo 1 lần ra nhiều biến
    int tuoi[60];  //index 0...59

  
    int b[100];
    float c[SIZE];

    int x = 10;

    int d[]={6,2,9,6,5};
    //           0 1 2 3 4
    int a[50] = {8,2,9,1,9};
    cout << a[2] << endl;
     a[2] = 10;
    cout << a[2] << endl;
    cout << a[5] << endl;
    a[5] = a[0] + a[2] -1;
    cout << a[5] << endl;
    return 0;
}
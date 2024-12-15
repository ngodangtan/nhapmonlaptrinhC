//
// Created by Felix Ngo on 14/12/24.
//

#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

struct PhanSo {
  int tu;
  int mau;
};

/* Yêu cầu: Viết ham in phan so
Phân tích:
Input:
+ Phan so a
*/
void printPhanSo(PhanSo a) {
  cout << "tu: " << a.tu << endl;
  cout << "mau: " << a.mau << endl;
  cout << endl;
}

/* Yêu cầu: Viet ham nhap phan so thu cong
Phân tích:
Input:
+ Phan so a
*/
void cinPhanSo(PhanSo& a) {
  cout << "Nhap tu so: ";
  cin >> a.tu;

  do {
    cout << "Nhap mau so (khac 0): ";
    cin >> a.mau;
    if (a.mau == 0) {
      cout << "Mau so khong duoc bang 0. Xin nhap lai.\n";
    }
  } while (a.mau == 0);
}

/* Yêu cầu: Viet ham nhap tu dong thu cong
Phân tích:
Input:
+ Phan so a
*/
void autoPhanSo(PhanSo& a, int& n) {
  n = 3 + rand()%6;
  for (int i = 0; i < n; i++) {
    // value [10;30] = 10 + [0;20]
    a.tu = 10 + rand()%21;
    a.mau = 10 + rand()%21;
  }
}

/* Yeu cau: Viet ham tim UCLN
Input:
+ int a, int b
Output:
+ return gia tri UCLN
*/
int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

/* Yêu cầu: Viet ham rut gon phan so
Phân tích:
Input:
+ Phan so a
*/
void rutGonPhanSo(PhanSo& a) {
  int ucln = gcd(a.tu, a.mau);
  a.tu /= ucln;
  a.mau /= ucln;
}

/* Yêu cầu: Viet ham nghich dao phan so
Phân tích:
Input:
+ Phan so a
*/
void nghichDaoPhanSo(PhanSo& a) {
  int tempTu = a.tu;
  a.tu = a.mau;
  a.mau = tempTu;
}

/* Yêu cầu: Viet ham tinh tong 2 phan so
Phân tích:
Input:
+ Phan so a, Phan so b
Output:
+ ket qua phan so
*/
PhanSo tongPhanSo(PhanSo a, PhanSo b) {
  PhanSo ketqua;
  ketqua.tu = (a.tu * a.mau) + (b.tu * b.mau);
  ketqua.mau = a.mau * b.mau;
  return ketqua;
}

/* Yêu cầu: Viet ham tinh tru 2 phan so
Phân tích:
Input:
+ Phan so a, Phan so b
Output:
+ ket qua phan so
*/
PhanSo truPhanSo(PhanSo a, PhanSo b) {
  PhanSo ketqua;
  ketqua.tu = (a.tu * a.mau) - (b.tu * b.mau);
  ketqua.mau = a.mau * b.mau;
  return ketqua;
}

/* Yêu cầu: Viet ham tinh nhan 2 phan so
Phân tích:
Input:
+ Phan so a, Phan so b
Output:
+ ket qua phan so
*/
PhanSo nhanPhanSo(PhanSo a, PhanSo b) {
  PhanSo ketqua;
  ketqua.tu = a.tu * b.tu;
  ketqua.mau = a.mau * b.mau;
  return ketqua;
}

/* Yêu cầu: Viet ham tinh nhan 2 phan so
Phân tích:
Input:
+ Phan so a, Phan so b
Output:
+ ket qua phan so
*/
PhanSo chiaPhanSo(PhanSo a, PhanSo b) {
  PhanSo ketqua;
  ketqua.tu = a.tu * b.mau;
  ketqua.mau = a.mau * b.tu;
  return ketqua;
}

int main() {
  srand(time(0));
  PhanSo a;
  cinPhanSo(a);
  printPhanSo(a);

  int n = 5;
  PhanSo b;
  cout << "Tu dong tao phan so" << endl;
  autoPhanSo(b,n);
  printPhanSo(b);

  cout << "Test: Phan so sau khi rut gon la: " << endl;
  rutGonPhanSo(b);
  printPhanSo(b);

  cout << "Test: Phan so sau khi nghich dao la: " << endl;
  nghichDaoPhanSo(b);
  printPhanSo(b);

  cout << "Test: Tong 2 phan so a va b: " << endl;
  printPhanSo(tongPhanSo(a, b));

  cout << "Test: Tru 2 phan so a va b: " << endl;
  printPhanSo(truPhanSo(a, b));

  cout << "Test: Nhan 2 phan so a va b: " << endl;
  printPhanSo(nhanPhanSo(a, b));

  cout << "Test: Chia 2 phan so a va b: " << endl;
  printPhanSo(chiaPhanSo(a, b));
  return 0;
}
//
// Created by Felix Ngo on 8/12/24.
//

#include <iostream>
using namespace std;
#include <math.h>

struct ToaDo{
  int x;
  int y;
} a = { 10,20}, b = {3,4};

typedef ToaDo Diem;

void printDiem(ToaDo a){
  cout << "x: " << a.x << endl;
  cout << "y: " << a.y << endl;
}

// Yeu cau 2: In mang chua cac Toa Do / Diem
void printArrDiem(Diem arr[], int n){
  cout << "Cac diem trong mang:" << endl;
  for(int i = 0; i < n; i++){
    printDiem(arr[i]);
  }
}

/* Yeu cau: Tao du lieu cho mang */
void initArrDiem(ToaDo a[], int& n) {
  a[0] = {4,5};
  a[1] = {6,7};
  a[2] = {8,9};
  a[3] = {10,11};
  a[4] = {12,13};
  n = 5;
}

float khoangCach(Diem a, Diem b)
{
  float x,y;
   x = pow(a.x - b.x, 2);
   y = pow(a.y - b.y, 2);

  return sqrt(x + y);
}

// Tính độ dài một điểm đến tâm O
float kcDenTamO(Diem a)
{
  return sqrt(pow(a.x, 2) + pow(a.y, 2));
}

/* Yeu cau: Viet ham tim gia tri nho nhat khoang cach tu tam O den cac diem
 Input:
 + Mang cac diem: Diem a[]
 + So luong int
 Output:
 + return min
 */


float minKcO(Diem a[], int n) {
  float m = kcDenTamO(a[0]);
  for(int i = 1; i < n; i++) {
    float kc = kcDenTamO(a[i]);
    if(kc < m) {
      m = kc;
    }
  }
  return m;
}

/* Yêu cầu: Viết hàm tìm ĐIỂM đầu tiên có khoảng cách gần tâm O nhất?
   Input:
   + Mảng các điểm: Diem a[]
   + Số lượng: int n

   Output:
   + return Diem
*/

Diem minDiemKcO(Diem a[], int n)
{
  Diem p = a[0];
  float m = kcDenTamO(a[0]);

  for (int i = 1; i < n; i++)
  {
    float kc = kcDenTamO(a[i]);
    if (kc < m)
    {
      m = kc;
      p = a[i];
    }
  }
  return p;
}

int main(){
  ToaDo a[50] = {1,2,3,4,5};
  int n = 5;

  Diem b[100] = {{1,2},{3,4},{5,6}};
  int m = 4;

  Diem c[100];
  int k = 0;

  cout << "Test: Khoi tao du lieu mang cac diem:" << endl;
  initArrDiem(c, k);

  cout << "\nTest: In cac diem trong mang:" << endl;
  printArrDiem(c, k);

  cout << "\nTest: Gia tri nho nhat cua cac diem den tam O: " << endl;
  cout << "\tKet qua: " << minKcO(c, k) << endl;

  cout << "\nTest: Diem dau tien gan tam O: " << endl;
  Diem r = minDiemKcO(c, k);
  printDiem(r);

  return 0;
}
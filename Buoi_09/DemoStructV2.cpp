//
// Created by Felix Ngo on 8/12/24.
//

#include <iostream>
#include <math.h>
using namespace std;

struct ToaDo{
  int x;
  int y;
} a = { 10,20}, b = {3,4};

typedef ToaDo Diem;

void printDiem(ToaDo a){
  cout << "x: " << a.x << endl;
  cout << "y: " << a.y << endl;
}

/* Yeu cau: Tinh do dai khi biet 2 toa do diem
 Input:
 + Diem thu nhat
 +
 Output:
 + do dai => return float
 */

float khoangCach(Diem a, Diem b) {
  float x,y;
  x = pow(a.x-b.x,2);
  y = pow(a.y-b.y,2);
  return sqrt(x+y);
}

int main(){
  ToaDo a = {1,2};
  Diem b = {3,4};
  printDiem(::a);
  printDiem(b);

  cout << "Test: Khoang cach AB(....) = " << khoangCach(a, b) << endl;
  return 0;
}
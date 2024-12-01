//
// Created by Felix Ngo on 1/12/24.
//

#include <iostream>
using namespace std;

struct ToaDo {
  int x;
  int y;
};

void printToaDo(ToaDo a) {
  cout << "(" << a.x << "; " << a.y << ")" << endl;
}

void cinToaDo(ToaDo& a) {
  cout << "Nhap lan luot hoanh do (x) va tung do (y): ";
  cin >> a.x >> a.y;
}


int main() {
  int x = 20;
  cout << x << endl;

  ToaDo a = {1,2};
  ToaDo b = {3,4};

  printToaDo(a);
  printToaDo(b);

  ToaDo c;
  cinToaDo(c);
  printToaDo(c);
  return 0;
}
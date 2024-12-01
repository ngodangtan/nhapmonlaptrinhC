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

int main() {
  int x = 20;
  cout << x << endl;

  ToaDo a = {1,2};
  ToaDo b = {3,4};

  printToaDo(a);
  printToaDo(b);

  ToaDo c;
  cout << "Nhap lan luot hoanh do (x) va tung do (y): " << endl;
  cin >> c.x >> c.y;
  printToaDo(c);
  return 0;
}
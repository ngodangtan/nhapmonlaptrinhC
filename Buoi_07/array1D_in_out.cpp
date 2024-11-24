//
// Created by Felix Ngo on 24/11/24.
//

#include <iostream>
#include <time.h>
using namespace std;
const int SIZE = 10;

void printArr(int a[], int n)
{
  cout << "Array[" << n << "]:  " << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void cinArr(int a[], int& n) {
  cout << "Nhap so luong mang n = " << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}

void autoArr(int a[], int& n) {
  // n se 3...8 = 3+[0;5]
  n = 3 + rand()%6;
  for (int i = 0; i < n; i++) {
    // value [10;30] = 10 + [0;20]
    a[i] = 10 + rand()%21;
  }
}

int main()
{
  srand(time(0));
  int b[SIZE];
  int m = 0;
  //cinArr(b, m);
  autoArr(b,m);
  printArr(b, m);

  int a[SIZE] = {36,26,79,59,66};
  int n = 5;
  printArr(a, n);
  return 0;
}
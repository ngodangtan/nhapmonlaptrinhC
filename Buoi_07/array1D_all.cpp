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

/* Yeu cau: Viet ham tim kiem mot gia tri co trong mang hay khong ?
Input:
+ a[] int
+ n: int
Output:
+ return bool
*/

bool searchValue(int a[], int n, int value) {
  for (int i = 0; i < n; i++) {
    if (a[i] == value) {
      return true;
    }
  }
  return false;
}

/* Yeu cau: Viet ham dem cac gia tri am, duong co trong mang ?
Input:
+ a[] int
+ n: int
Output:
+ return bool
*/

int main()
{

  int a[SIZE] = {36,26,79,59,66,99,11,39};
  int n = 8;
  cout <<  "Test: Y/c 1. In mang: " << endl;
  printArr(a, n);
  cout << "\nTest: Y/c 2. Tim gia tri 59(1): " << searchValue(a,n,59) << endl;
  cout << "Test: Y/c 2.Tim gia tri 31(1): " << searchValue(a,n,31) << endl;
  cout << "Test: Y/c 2. In mang: " << endl;
  cout << "Test: Y/c 2. In mang: " << endl;
  return 0;
}
//
// Created by Felix Ngo on 1/12/24.
//

#include <iostream>
using namespace std;

const int Size = 10;

// Note: Duong cheo chinh, duong cheo phu chi co o square array

void printCheoChinhArray(int a[][Size], int n) {
    cout << "\nSquare Array[" << n << "][" << n << "]" << endl;
    cout << "Duong cheo chinh la: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << a[i][j] << "    ";
            }
        }
    }
}

void printSquareArray(int a[][Size], int n) {
    cout << "\nSquare Array[" << n << "][" << n << "]" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
}

int main() {
  int a[Size][Size] = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12},
      {13,14,15,16},
  };

  int n = 4;

  printSquareArray(a, n);
  printCheoChinhArray(a, n);
  return 0;
}
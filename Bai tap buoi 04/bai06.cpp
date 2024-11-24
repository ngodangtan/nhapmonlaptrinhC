#include <iostream>
using namespace std;

int main() {
   // Su dung Euclid
   int a, b;
   cout << "Nhap so a: " << endl;
   cin >> a;
   cout << "Nhap so b: " << endl;
   cin >> b;
   while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
   }
   cout << "Uoc chung lon nhat cua 2 so" << a << endl;
    return 0;
}
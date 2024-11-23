#include <iostream>
using namespace std;
/* Viết hàm thực hiện tính toán:
+ nếu a và b chẵn (số thực chẵn lẻ dựa vào phần nguyên) thì cộng.
+ trường hợp khác thì trừ

Input:
+ a: float
+ b: float
Output:
+ kq: float => return
+
*/

float tinh(float a, float b)
{
    float kq = 0;
    if ((int)a % 2 == 0 && (int)b % 2 == 0)
        return a + b;
   
    return a - b;
}

int main()
{
    cout << "Ket qua (...) = " << tinh(2.1, 5.9) << endl;
    cout << "Ket qua (...) = " << tinh(-2.1, 5.9) << endl;
    cout << "Ket qua (...) = " << tinh(2.1, -6.9) << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhập vào 3 cạnh a, b, c: ";
    cin >> a >> b >> c;

    // Kiểm tra xem có phải tam giác hợp lệ không
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Đây là một tam giác hợp lệ.\n";

        // Phân loại tam giác
        if (a == b && b == c) {
            cout << "Tam giác đều.\n";
        } else if (a == b || a == c || b == c) {
            cout << "Tam giác cân.\n";
        } else if (a * a + b * b == c * c ||
                   a * a + c * c == b * b ||
                   b * b + c * c == a * a) {
            cout << "Tam giác vuông.\n";
        } else {
            cout << "Tam giác thường.\n";
        }
    } else {
        cout << "Không phải là tam giác.\n";
    }

    return 0;
}
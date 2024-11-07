#include <iostream>

using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap n = ";
        cin >> n;
    } while (n <= 0);

    int t = 1;

    for (int i = 1; i <= n; i++) {
        // t = t + i;
        t *= i;
    }

    cout << "Ket qua = " << t << endl;

    return 0;
}
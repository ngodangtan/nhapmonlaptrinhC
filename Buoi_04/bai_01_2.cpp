#include <iostream>

using namespace std;

int main() {
    for (int j = 2; j <= 9; j++) {
        for (int i = 1; i <= 10; i++) {
            cout << j << " x " << i << " = " << j * i << endl;
        }
        cout << endl;
    }

    return 0;
}
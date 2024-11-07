#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 9; j++) {
            cout << "*";
        }
        cout << endl;  // Add a newline after each row
    }
    return 0;
}
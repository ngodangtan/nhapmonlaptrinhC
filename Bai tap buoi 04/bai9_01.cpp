#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; 2*i < 979; i++) {
        for(int j = 1; 7*j < 979; j++) {
            for(int k = 1; 9*k; k++) {
                if(2*i + 7*j + 9*k < 979) {
                    cout << "Nghiem: " << i << "," << j << "," << k << endl;
                }
            }
        }
    }
    return 0;
}
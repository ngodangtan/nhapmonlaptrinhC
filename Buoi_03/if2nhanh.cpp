#include<iostream>
using namespace std;

int main()
{
    /*
    De duoc phep lai xe: Nong do con <=0, co bang lai
    */
    float nongDoCon = 1.15;
    bool bangLai = true;
    if(nongDoCon <= 0 && bangLai == true) {
        cout << "Duoc phep lai xe" << endl;
    } else {
         cout << "Ko duoc phep lai xe" << endl;
    }

    return 0;
}
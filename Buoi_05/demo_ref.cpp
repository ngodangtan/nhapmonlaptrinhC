#include <iostream>
using namespace std;

int main()
{
    int x = 36;
    int& f = x;
    f = 21;
    cout << "x = " << x << endl;
    return 0;
}
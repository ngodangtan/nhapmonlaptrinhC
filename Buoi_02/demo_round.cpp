#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double x = 1.12345567;
    cout << round(x * 1e4) / 1e4 << endl;
    return 0;
}
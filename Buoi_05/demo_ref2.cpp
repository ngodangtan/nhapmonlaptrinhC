#include <iostream>
using namespace std;

int tinh(int a, int b, int& hieu) 
{
    int tong = a + b;
    int hieu = a - b;
    return tong
}

int main()
{
    int t, h;
    t = tinh(5, 10, h);
    cout << "Tong = " << t << endl;
    cout << "Hieu = " << h << endl;
    return 0;
}
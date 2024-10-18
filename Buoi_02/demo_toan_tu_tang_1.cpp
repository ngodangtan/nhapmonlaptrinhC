#include<iostream>
using namespace std;

int main()
{
    // ++ --
    int x = 10;
    cout << "1. x= " << x << endl;
    int y = x++;
    // x++;
    // ++x;
    // x = x + 1;
    // x += 1;
    cout << "2. x = " << x << endl;
    cout << "3. y = " << y << endl;
    return 0;
}
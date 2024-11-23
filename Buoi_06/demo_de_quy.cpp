#include <iostream>
using namespace std;

void a(int n)
{
    cout << "a" << endl;
    n--;
    
    if (n >= 0)
        a(n);
}

int main()
{
    int n = 3;
    a();
    return 0;
}
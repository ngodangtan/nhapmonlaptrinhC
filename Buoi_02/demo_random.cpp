#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Random =" << rand() << endl;
    cout << 10 + rand()%41 << endl;
    return 0;
}
#include <iostream>
using namespace std;

int& ham(int& x)
{
    x = 369;
    return x;
}

int main()
{
    int value = 36; //3 bien tham gia vao vung nho: r,x,value
    int& r = ham(value);

    cout << "Bien value = " << value << endl; // 369
    cout << "Bien r = " << r << endl;

    r = 123;
    cout << "2. Bien value = " << value << endl; // 123

    return 0;
}
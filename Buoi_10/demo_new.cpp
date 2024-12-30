//
// Created by Felix Ngo on 15/12/24.
//

#include <iostream>
using namespace std;

int main()
{
    int* p = new int(6789);
    *p = 6789;
    cout << "1. Dia chi: " << p << ". Gia tri: " << *p << endl;
    delete p;
    p = NULL;
    cout << "2. Dia chi: " << p << ". Gia tri: " << *p << endl;
    return 0;
}
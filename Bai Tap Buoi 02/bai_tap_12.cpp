#include<iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int taoSoNguyenRandom(int min, int max) {
    return min + rand()%(max - min + 1);
}

float taoSoThucRandom(float min, float max) {
    float random = float(rand()) / float(RAND_MAX);
    return min + random * (max - min);
}

int main()
{
    srand(time(0));

    cout << "So nguyen [0, 100]: " 
         << taoSoNguyenRandom(0, 100) << endl;

    cout << "So nguyen [50, 99]: " 
         << taoSoNguyenRandom(50, 99) << endl;

    cout << "So nguyen [-39, 79]: " 
         << taoSoNguyenRandom(-39, 79) << endl;

    cout << "So nguyen [-79, -39]: " 
         << taoSoNguyenRandom(-79, -39) << endl;

    cout << "So thuc [0, 100]: " 
         << taoSoThucRandom(0.0, 100.0) << endl;

    cout << "So thuc [50, 99]: " 
         << taoSoThucRandom(50.0, 99.0) << endl;

    cout << "So thuc [-39, 79]: " 
         << taoSoThucRandom(-39.0, 79.0) << endl;

    cout << "So thuc [-79, -39]: " 
         << taoSoThucRandom(-79.0, -39.0) << endl;
    return 0;
}
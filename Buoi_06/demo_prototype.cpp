#include <iostream>
using namespace std;

int x;
void c(); // khai bao
void a(int, int) // khai bao mau ham ko can them x va y

void a(int x, int y) 
{
    cout << "Ham a" << endl;
}

void b() 
{
       cout << "Ham b" << endl;
       c(); //goi c khong duoc vi c nam duoi, goi theo thu tu
       // muon goi dc o dau cung dc phai khai bao prototype
}

void c() // trien khai
{
       cout << "Ham c" << endl;
       a();
       //b();
}


int main() 
{
    return 0;    
}
#include <iostream>
using namespace std;

int main() {
    int n;
    int giaithua = 1;
    printf("Nhap so n: ");   
    scanf("%d", &n);    
    for (int i = 1; i <= n; i++)
    {
       giaithua *= i;
    }
    
    printf("Ket qua: %d",giaithua);
    return 0;               
}
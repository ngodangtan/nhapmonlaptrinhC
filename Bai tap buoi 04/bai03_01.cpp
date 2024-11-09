#include <iostream>
using namespace std;

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    while (n < -99 || n > 99)
    {
        printf("Nhap sai dieu kien, nhap lai");
        scanf("%d", &n); 
    }
    printf("Ban da nhap dung gia tri hop le %d\n", n);
    return 0;
}
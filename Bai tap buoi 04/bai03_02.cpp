#include <iostream>
using namespace std;

int main() {
    float n;
    printf("nhap so n: ");
    scanf("%f", &n);
    while (n < -89.9 || n > 88.8)
    {
       printf("nhap sai dieu kien y/c nhap lai");
       scanf("%f", &n);
    }
    printf("ban nhap dung y/c: %f\n", n);
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    float result, somu;
    printf("Nhap so n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        somu *= i;
        result += pow(2,somu);
    }
    printf("Ket qua la %f",result);

    return 0;
}
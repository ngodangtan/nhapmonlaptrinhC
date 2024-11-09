#include <iostream>
using namespace std;

int main()
{
    int n, result;
    bool isCorrect = false;
    printf("Nhap so n");
    scanf("%d", &n);
    while (n < 5 || n > 10)
    {
        printf("nhap sai dieu kien y/c nhap lai");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += j;
        }
        result *= sum;
        
    }
    printf("Ket qua la %d", result);

    return 0;
}
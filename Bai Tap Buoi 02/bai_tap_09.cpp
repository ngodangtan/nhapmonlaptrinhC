#include<iostream>
using namespace std;

int main()
{
    float chieuCao, canNang, bmi;
    printf("Nhap chieu cao: ");
    scanf("%f", chieuCao);
    printf("Nhap can nang: ");
    scanf("%f", canNang);
    bmi = canNang / (chieuCao*chieuCao);
    printf("Chi so BMI cua ban la: %f",bmi);
    return 0;
}
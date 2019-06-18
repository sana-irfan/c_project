#include<stdio.h>
int main()
{
    float temp_F, temp_C;
    printf("Enter temperature in Fahrenheit");
    scanf("%f", &temp_F);
    temp_C = (temp_F - 32.0) *0.556;
    printf("The temperature %f F is equal to %f C ", temp_F, temp_C);
    return 0;

}
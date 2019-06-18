#include<stdio.h>
int main()
{
    float temp_F, temp_C;
    printf("Enter temperature in Fahrenheit");
    scanf("%d", &temp_F);
    temp_C = (temp_F - 32)*0.5556;
    printf("The temperature %d F is equal to %d C", temp_F, temp_C);
    return 0;

}
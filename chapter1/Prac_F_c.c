#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float percent;
    printf("Enter the marks");
    scanf("%d %d %d  %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = total/5;
    printf("Your total is %d \n", total);
    printf("Your percentage marks are %f", percent);
    return 0;
}
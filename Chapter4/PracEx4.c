//Write a program to determine whether the driver should be insured or not
#include <stdio.h>
int main()
{
    char sex, ms;
    int age;

    printf("Enter age, sex (M for Male & F fr Female) & marital status (M for married & U for unmarried");
    scanf("%d %c %c", &age, &sex, &ms);

    if(ms == 'M')
        printf("Driver should be insured");
    else
    {
        if(sex == 'M' )
        {
            if(age > 30)
                printf(" ")
        }
    }

}
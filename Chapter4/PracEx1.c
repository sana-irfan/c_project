//Write a program to calculate the division obtained by the students
#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, per;
    printf("Enter the marks in 5 subjects");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
    per = (a1 + a2 + a3 + a4 + a5) / 5;
    if(per >= 60)
        printf("First Division\n");
    else
    {
        if(per >= 50)
            printf("Second Division\n");
        else
        {
            if(per >=40)

                printf("Third Division\n");

            else
                printf("Fail");
        }

    }
    return 0;
}
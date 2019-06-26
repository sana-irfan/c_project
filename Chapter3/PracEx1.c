//Calculation of total Expenses
#include <stdio.h>
int main()
{
    int q, d;
    float r, t;
    printf("Enter quantity and rate");
    scanf("%d%f", &q, &r);
    if(q>1000)
        d = 10;
    else
        d = 0;
    t = (q *r) - (q * r * d / 100);
    printf("Total Expenses = Rs. %f\n", t);
    return 0;
}
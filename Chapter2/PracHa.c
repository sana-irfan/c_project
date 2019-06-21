//If a program is input through the keyboard, write a program to calculate the sum of its digits.
#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter any five digit number");
    scanf("%d", &n);
    d = n % 10;
    n = n / 10;
    d = d + n % 10;
    n = n / 10;
    d = d + n % 10;
    n = n / 10;
    d = d + n % 10;
    n = n / 10;
    d = d + n % 10;

    printf("The sum of the given five digit number is %d", d );
    return 0;

}
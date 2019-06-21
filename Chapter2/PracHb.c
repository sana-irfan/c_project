//if a five digit number is input through the keyboard, write  program to reverse the number.
#include <stdio.h>
int main()
{
    int n, d, c;
    printf("Enter a five digit number");
    scanf("%d", &n);


    c = n % 10;
    d =  c * 10000;
    n = n / 10;


    c = n % 10;
    d = d + c * 1000;
    n = n / 10;


    c = n % 10;
    d = d + c * 100;
    n = n / 10;

    c = n % 10;
    d = d + c * 10;
    n = n / 10;

    c = n % 10;
    d = d + c;

    printf("The given number  in reverse order is %d", d);
    return 0;

}
//Prime no using break statement
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number");
    scanf("%d", &n);
    i = 2;
    while (i <= n-1 )
    {
        if (n % i == 0)
        {
            printf("not a prime number\n");
            break;
        }
    }
    if(i == n)
    printf("Prime Number\n");
return 0;
}
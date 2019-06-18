#include <stdio.h>
int main()
{
    int p, n;
    float si, r;
    printf("Enter Values of p, r, n");
    scanf("%d %f %d", &p, &r, &n);
    si = p * r * n / 100;
    printf("%f \n", si);
    return 0;
}


//Question- To write a program to receive cartesian coordinates (x, y) of a points and convert them into polar coordinates.
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, p;
    printf("Enter x and y coordinates");
    scanf("%f %f\n", &x, &y);
    p = atan(y/x);
    x = x * x;
    y = y * y;
    r = sqrt(x + y);
    printf("The polar coordinates of the given cartesian coordinates r=%f, p=%f", r, p);
    return 0;
};
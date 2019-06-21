//Question- If lengths of 3 sides of a triangle are input through the keyboard, write a program to find teh area of the triangle.
#include <stdio.h>
#include <math.h>
int main()
{

    float s, ar, a, b, c;;
    printf("Enter 3 sides of triangle");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c)/2.0;
    s = s * (s - a) * (s - b) * (s - c);
    ar = sqrt(s);
    printf("The area of the triangle is %f", ar);
    return 0;


}
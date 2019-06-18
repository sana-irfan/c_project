#include <stdio.h>
int main()
{
    float rect_length, rect_breadth, radius, rect_area, rect_peri, circle_area, circle_circum;
    printf("Enter the length, breadth, and radius in m \n");
    scanf("%f %f %f", &rect_length, &rect_breadth, &radius);
    rect_area = rect_length * rect_breadth;
    rect_peri = 2.0*(rect_length + rect_breadth);
    circle_area = 3.14 * (radius * radius);
    circle_circum = 2.0 * 3.14 * radius;
    printf("The area and perimeter of rectangle whose length and breadth is %f sq m and %f m respectively \n The area and circumference of circle having radius %f m is %f sq m and %f m respectively  ", rect_area, rect_peri, radius, circle_area, circle_circum);
    return 0;

}

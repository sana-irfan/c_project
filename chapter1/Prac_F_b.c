#include <stdio.h>
int main()
{
    float dist_km, dist_m, dist_f, dist_in, dist_cm;
    printf("Enter the distance in km \n");
    scanf("%f", dist_km);
    dist_m=dist_km*1000;
    dist_f=dist_km*3280.84;
    dist_in=dist_km*39370.079;
    dist_cm=dist_km*1000000;
    printf("The input distance %f in m, ft, in, cm %f %f %f %f \n", dist_km,dist_m, dist_f, dist_in, dist_cm);
    return 0;
}
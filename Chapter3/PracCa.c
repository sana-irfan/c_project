//Question- If CP & SP of an item are input through the seller keyboard, write a program to determine whether the seller has made profit or incurred loss.
//also determine how much profit he made or loss he incurred
#include <stdio.h>
int main()
{
    int cp, sp, p, l;
    printf("Enter cost price and selling price");
    scanf("%d %d", &cp, &sp);
    if(cp < sp)
        {
        p = sp - cp;
        printf("The seller has made a profit of %d", p) ;
        }
    else
        {
        l = cp - sp;
        printf("The seller has incurred a loss of %d", l);
        }
    return 0;
}
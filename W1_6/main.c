#include <stdio.h>
#include <math.h>
int main()
{
    float a1,b1,c1,a2,b2,c2, x, y;
    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
    printf("x = %.2f and y = %.2f", x, y);
    return 0;
}

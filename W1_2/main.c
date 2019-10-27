#include <stdio.h>
#define PI 3.1416

int main()
{
    float volume, surfaceArea;
    int radius, height;
    printf("Enter the radius:\n");
    scanf("%d", &radius);
    printf("Enter the height:\n");
    scanf("%d", &height);
    volume = PI*radius*radius*height;
    surfaceArea = 2*PI*radius*height + 2*PI*radius*radius;
    printf("The volume is: %.2f\n", volume);
    printf("The surface area is: %.2f\n", surfaceArea);
    return 0;
}

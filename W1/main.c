#include <stdio.h>
int main()
{
    float fahrenheit, celsius; // declare variables
    printf("Enter the temperature in degree F: \n");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0)*(fahrenheit-32);
    printf("Converted degree in C: %.2f\n", celsius);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int n, denominator = 1;
    float x, result = 1.0, numerator = 1.0;
    printf("Enter x: \n");
    scanf("%f", &x);
    for(short int i = 1; i<=10;i++){
        numerator = pow((double)x, (double)i);
        if(i==0)
            denominator = 1;
        else{
            denominator *= i;
        }
        printf("Numerator: %f\n", numerator);
        printf("Denominator: %d\n", denominator);
        result += (numerator/(float)denominator);
    }
    printf("Result = %.2f\n", result);
    return 0;
}

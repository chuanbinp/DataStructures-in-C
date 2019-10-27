#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result=0;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("perfectProd1(): %d\n", perfectProd1(number));
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    int perfect = 1;
    for(int i=1; i<num; i++){
        int sum_factors=0;
        for(int j=1; j<=i/2; j++){
            if(i%j == 0){
                sum_factors += j;
            }
        }
        if(sum_factors == i)
            perfect *= i;
    }
    return perfect;
}
void perfectProd2(int num, int *prod)
{
    int perfect = 1;
    for(int i=1; i<num; i++){
        int sum_factors=0;
        for(int j=1; j<=i/2; j++){
            if(i%j == 0){
                sum_factors += j;
            }
        }
        if(sum_factors == i)
            perfect *= i;
    }
    *prod = perfect;
}

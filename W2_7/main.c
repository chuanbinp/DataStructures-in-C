#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}
int extOddDigits1(int num)
{
    int digit, new_number=0, power = 1;
    while(num>0){
        digit = num % 10;
        if(digit%2 != 0){
            new_number = new_number + digit*power;
            power*=10;
        }
        num /= 10;
    }
    return (new_number==0)? -1 : new_number;
}
void extOddDigits2(int num, int *result)
{
    int digit, new_number=0, power = 1;
    while(num>0){
        digit = num % 10;
        if(digit%2 != 0){
            new_number = new_number + digit*power;
            power*=10;
        }
        num /= 10;
    }
    *result = (new_number==0)? -1 : new_number;
}

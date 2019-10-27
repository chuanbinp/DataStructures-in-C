#include <stdio.h>
int rAllOddDigits1(int num);
void rAllOddDigits2(int num, int *result);
int main()
{
    int number, result=-1;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("rAllOddDigits1(): %d\n", rAllOddDigits1(number));
    rAllOddDigits2(number, &result);
    printf("rAllOddDigits2(): %d\n", result);
    return 0;
}
int rAllOddDigits1(int num)
{
    if(num<10)
        return (num%2==0) ? 0 : 1;
    else
        return (num%2==0) ? 0 : rAllOddDigits1(num/10);
}
void rAllOddDigits2(int num, int *result)
{
    if(num<10)
        *result = (num%2==0) ? 0 : 1;
    else
        *result = (num%2==0) ? 0 : rAllOddDigits1(num/10);
}

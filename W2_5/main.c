#include <stdio.h>
int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main()
{
    int number, result=-1;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("countOddDigits1(): %d\n", countOddDigits1(number));
    countOddDigits2(number, &result);
    printf("countOddDigits2(): %d\n", result);
    return 0;
}
int countOddDigits1(int num)
{
    int digit, ocount=0;
    while(num>0){
        digit = num%10;
        if(digit%2 != 0)
            ocount++;
        num /= 10;
    }
    return ocount;
}
void countOddDigits2(int num, int *result)
{
    int digit, ocount=0;
    while(num>0){
        digit = num%10;
        if(digit%2 != 0)
            ocount++;
        num /= 10;
    }
    *result = ocount;
}

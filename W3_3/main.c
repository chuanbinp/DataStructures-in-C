#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20],i,size=0,num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int i;
    for(i=100;i<num;i++){
        int digit;
        int sum_cubes = 0;
        int current_i = i;

        while(current_i>0){
            digit = current_i%10;
            sum_cubes += digit*digit*digit;
            current_i /= 10;
        }
        if(sum_cubes == i){
            ar[*size] = i;
            *size += 1;
        }
    }
}

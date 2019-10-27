#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50],i,size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int i, s_pos = 0, l_pos = 0, temp;
    for(i=0;i<size;i++){
        if(ar[i]>=ar[l_pos])
            l_pos = i;
        if(ar[i]<=ar[s_pos])
            s_pos = i;
    }
    temp = ar[l_pos];
    ar[l_pos] = ar[s_pos];
    ar[s_pos] = temp;
}

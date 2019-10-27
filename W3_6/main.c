#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
    int i,b[50],size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}
int platform1D(int ar[], int size)
{
    int i, current_plength=1, current_int= ar[0], max_plength=1;
    for(i=1;i<size;i++){
        if(ar[i] == current_int)
            current_plength++;
        else{
            current_int = ar[i];
            if(current_plength>max_plength)
                max_plength = current_plength;
            current_plength = 1;
        }
    }
    if(current_plength>max_plength)
        max_plength = current_plength;
    return max_plength;
}

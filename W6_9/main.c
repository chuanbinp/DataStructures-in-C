#include <stdio.h>
int rLookupAr(int array[], int size, int target);
int main()
{
    int numArray[80];
    int target, i, size;
    int result=-999;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i=0; i < size; i++)
        scanf("%d", &numArray[i]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    result = rLookupAr(numArray, size, target);
    printf("rLookupAr(): %d", result);
    return 0;
}
int rLookupAr(int array[], int size, int target)
{
    int start = 0, end = size-1;
    if(start == end)
        return -1;
    else if(array[end] == target)
        return size-1;
    else
        return (rLookupAr(array, size-1, target)==-1) ? -1 : rLookupAr(array, size-1, target);
}

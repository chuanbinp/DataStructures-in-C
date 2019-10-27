#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
    char a[80],b[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    printf("compareStr(): %d\n", compareStr(a,b));
    return 0;
}
int compareStr(char *s, char *t)
{
    int length = (strlen(s)>=strlen(t)) ? strlen(s): strlen(t);
    int i, result;
    for(i=0;i<length;i++){
        if(*(s+i) == *(t+i))
            continue;
        else{
            result = *(s+i) - *(t+i);
            break;
        }
    }
    return result;
}

#include <stdio.h>
int countWords(char *s);
int main()
{
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int i, count=0;
    for(i=0;i<strlen(s);i++){
        if(*(s+i)==' ' && *(s+i-1)!=' ' && i!=0 && i!=strlen(s)-1)
            count++;
    }
    return count+1;
}

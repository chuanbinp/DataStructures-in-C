#include <stdio.h>
int longWordLength(char *s);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int count=0, max_count=0;
    int i;
    for(i=0;i<strlen(s);i++){
        if(*(s+i)==' '){
            if(count>max_count)
                max_count = count;
            count = 0;
            continue;
        }
        count++;
    }
    if(count-1>max_count)
        max_count = count-1;
    return max_count;
}

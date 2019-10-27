#include <stdio.h>
void delNum(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    delNum(str);
    printf("delNum(): %s", str);
    return 0;
}
void delNum(char *str)
{
    char dest[80];
    char src[80];
    strcpy(dest, str);
    strcpy(src, str);
    int i=0, j=0;

    while(src[i] != '\0'){
        if(isdigit(src[i])){
            i++;
            continue;
        }
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    strcpy(str, dest);
}

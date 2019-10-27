#include <stdio.h>
#include <ctype.h>
void convertCaseStr(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    convertCaseStr(str);
    printf("convertCaseStr(): %s\n", str);
    return 0;
}
void convertCaseStr(char *str)
{
    int i=0;
    while(*(str+i)!='\0'){
        if(*(str+i)>='A' && *(str+i)<='Z')
            *(str+i) = *(str+i)+32;
        else if(*(str+i)>='a' && *(str+i)<='z')
            *(str+i) = *(str+i)-32;
        i++;
    }
}

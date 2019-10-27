#include <stdio.h>
#include <string.h>
int locateLastChar(char *str, char ch);
int main()
{
    char str[40], ch;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateLastChar(): %d\n", locateLastChar(str, ch));
    return 0;
}
int locateLastChar(char *str, char ch)
{
//    int i=0, result=-1;
//    while(*(str+i) != '\0'){
//        if(*(str+i) == ch){
//            result = i;
//        }
//        i++;
//    }
//    return result;
    return (strrchr(str, ch) == 0) ? -1 : strrchr(str, ch) - str;
}

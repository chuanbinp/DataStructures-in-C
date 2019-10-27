#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40], ch;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch)
{
//    int i=0, result=-1;
//    while(*(str+i) != '\0'){
//        if(*(str+i) == ch){
//            result = i;
//            break;
//        }
//        i++;
//    }
//    return result;
    return (strchr(str, ch) == 0) ? -1 : strchr(str, ch) - str;
}

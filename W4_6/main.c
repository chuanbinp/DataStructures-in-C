#include <stdio.h>
#include <string.h>
void reverseStr(char *str);
int main()
{
char str[80];
printf("Enter a string: \n");
gets(str);
reverseStr(str);
printf("reverseStr(): %s\n", str);
return 0;
}
void reverseStr(char *str)
{
    str = strrev(str);
}

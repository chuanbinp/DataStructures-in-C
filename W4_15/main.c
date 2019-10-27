#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
char str[80];
printf("Enter a string: \n");
gets(str);
printf("maxCharToFront(): ");
maxCharToFront(str);
puts(str);
return 0;
}
void maxCharToFront(char *str)
{
    int i, largest_pos = 0;
    char largest;
    for(i=1;i<strlen(str);i++){
        if(*(str+i)>*(str+largest_pos))
            largest_pos = i;
    }
    largest = *(str+largest_pos);
    for(i=largest_pos;i>0;i--)
        *(str+i) = *(str+i-1);
    *str = largest;
}

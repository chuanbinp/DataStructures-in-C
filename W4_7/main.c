#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50];
    int totVowels, totDigits;
    printf("Enter the string: \n");
    gets(str);
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    int i=0;
    *totVowels = 0;
    *totDigits = 0;
    while(*(str+i)!='\0'){
        if(*(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u'||
           *(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U')
            *totVowels+=1;
        else if(*(str+i)>='0' && *(str+i)<='9')
            *totDigits+=1;
        i++;
    }
}

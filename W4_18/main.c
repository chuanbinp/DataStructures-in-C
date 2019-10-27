#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[])
{
    int i,j;
    int count=0;
    for(i=0;i<strlen(str);i++){
        if(*(str+i)==*substr){
            for(j=0;j<strlen(substr);j++){
                if((*(str+j+i)==*(substr+j)) && (j==strlen(substr)-1))
                    count++;
                else if(*(str+j+i)==*(substr+j))
                    continue;
                else
                    break;
            }
        }
    }
    return count;
}

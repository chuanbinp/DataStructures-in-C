#include <stdio.h>
#define INIT_VALUE -1
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40];
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
    int i,j;
    int result=-1;
    for(i=0;i<strlen(str);i++){
        if(result==1)
            break;
        if(*(str+i)==*substr){
            result = 1;
            for(j=0;j<strlen(substr);j++){
                if(*(str+j+i)==*(substr+j))
                    continue;
                else{
                    result = 0;
                    break;
                }
            }
        }
    }
    return result;
}

#include <stdio.h>
#define INIT_VALUE 999
int stringcmp(char *s1, char *s2);
int main()
{
    char source[80], target[80];
    int result = INIT_VALUE;
    printf("Enter a source string: \n");
    gets(source);
    printf("Enter a target string: \n");
    gets(target);
    result = stringcmp(source, target);
    if (result == 1)
        printf("stringcmp(): greater than");
    else if (result == 0)
        printf("stringcmp(): equal");
    else if (result == -1)
        printf("stringcmp(): less than");
    else
        printf("stringcmp(): error");
    return 0;
}
int stringcmp(char *s1, char *s2)
{
    int i, result = 0;
    int length = (strlen(s1)>=strlen(s2)) ? strlen(s1): strlen(s2);
    for(i=0; i<length;i++){
        if(*(s1+i)==*(s2+i))
            continue;
        else if(*(s1+i)>*(s2+i)){
            result = 1;
            break;
        }
        else if(*(s1+i)<*(s2+i)){
            result = -1;
            break;
        }
    }
    return result;

}

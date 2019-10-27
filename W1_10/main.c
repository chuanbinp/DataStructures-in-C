#include <stdio.h>
int main()
{
    int ccount = 0, dcount = 0;
    char ch;
    printf("Enter your characters (# to end): \n");

    scanf("%c", &ch);

    while(ch != '#'){
        if ('1'<=ch && ch <='9')
            dcount++;
        else if (('A'<=ch && ch<='Z')||('a'<=ch && ch<='z'))
            ccount++;
        scanf("%c", &ch);
    }


    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", ccount);
    return 0;
}

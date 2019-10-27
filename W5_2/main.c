#include <stdio.h>
#include <string.h>
typedef struct {
    char source;
    char code;
} Rule;
void encodeChar(Rule *table, char *s, char *t);
void createTable(Rule *table);

int main()
{
    char s[80],t[80], dummychar, repeat;
    Rule table[100];
    createTable(table);
    do {
        scanf("%c",&dummychar);
        printf("Source string: \n");
        gets(s);
        encodeChar(table,s,t);
        printf("Encoded string: %s\n", t);
        printf("Continue ('y' or 'n'): ");
        scanf("%c", &repeat);
    } while (repeat == 'y');
    return 0;
}
void createTable(Rule *table)
{
    int i, num;
    char dummychar;
    printf("Enter number of rules: \n");
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        printf("Enter rule %d: \n", i+1);
        scanf("%c",&dummychar);
        printf("Enter source character: ");
        scanf("%c", &table->source);
        scanf("%c",&dummychar);
        printf("Enter code character: ");
        scanf("%c", &table->code);
        table++;
    }
    table->source = '\0';
    table->code = '\0';
}

void encodeChar(Rule *table, char *s, char *t)
{
    int i, j;
    int table0 = table;
    for(i=0;i<strlen(s); i++){ //strlen(ADDRESS)
        *(t+i) = *(s+i);
        table = table0;
        while((*table).source != '\0'){
            if(*(t+i) == (*table).source){
                *(t+i) = (*table).code;
                break;
            }
            table++;
        }
    }
    *(t+strlen(s)) = '\0';
}

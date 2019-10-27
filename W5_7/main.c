#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20];
    int size;

    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}
int readin(PhoneBk *p)
{
    int size=0;
    printf("Enter name:\n");
    gets(&(p[size].name));
    while(strcmp(p[size].name, "#") != 0){
        printf("Enter tel:\n");
        scanf("%s", &(p[size].telno));
        getchar();
        size++;
        printf("Enter name:\n");
        gets(&(p[size].name));
    }
    return size;
}
void search(PhoneBk *p, int size, char *target)
{
    int i, found=0;
    for(i=0; i<size; i++){
        if(strcmp(target, p[i].name) == 0){
            found = 1;
            printf("Name = %s, Tel = %s", p[i].name, p[i].telno);
            break;
        }
    }
    if(found==0)
        printf("Name not found!");
}

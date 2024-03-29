#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);

int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    int i;
    for(i=0;i<3;i++){
        printf("Enter person %d:\n", i+1);
        scanf("%s %d", &p[i].name, &p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    int i, mid_p;
    int min_p = 0, max_p = 0;
    for(i=1;i<3;i++){
        if(p[i].age>p[max_p].age)
            max_p = i;
        if(p[i].age<p[min_p].age)
            min_p = i;
    }
    mid_p = 3 - max_p - min_p;
    return p[mid_p];
}

#include <stdio.h>
#include <string.h>
#define SIZE 50
typedef struct {
    int id;
    char name[50];
} Student;
void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);

int main()
{
    Student s[SIZE];
    int size=0, choice;
    char target[80];
    int result;
    printf("Select one of the following options: \n");
    printf("1: inputStud()\n");
    printf("2: removeStud()\n");
    printf("3: printStud()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter size: \n");
                scanf("%d", &size);
                printf("Enter %d students: \n", size);
                inputStud(s, size);
                break;
            case 2:
                printf("Enter name to be removed: \n");
                scanf("\n");
                gets(target);
                printf("removeStud(): ");
                result = removeStud(s, &size, target);
                if (result == 0)
                    printf("Successfully removed\n");
                else if (result == 1)
                    printf("Array is empty\n");
                else if (result == 2)
                    printf("The target does not exist\n");
                else
                    printf("An error has occurred\n");
                break;
            case 3:
                printStud(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}
void inputStud(Student *s, int size)
{
    int i;
    char dummychar;
    for(i=0;i<size;i++){
        printf("Student ID:\n");
        scanf("%d", &(*(s+i)).id);
        getchar();
        printf("Student Name:\n");
        gets(&(*(s+i)).name);
    }
}
void printStud(Student *s, int size)
{
    int i;
    printf("The current student list:\n");
    if(size>0){
        for(i=0;i<size;i++)
            printf("Student ID: %d Student Name: %s\n", (*(s+i)).id, (*(s+i)).name);
    }
    else
        printf("Empty array\n");
}
int removeStud(Student *s, int *size, char *target)
{
    int i, removal_pos=-1, success=2;
    if(*size==0){
        success = 1;
    }
    else{
        for(i=0;i<*size;i++){
            //printf("Target: %s\n", target); //    WHY TARGET IS NOT ADDRESS BUT STRING??
            printf("Current Name: %s\n", (*(s+i)).name);
            printf("Current Name Address: %d\n", &(*(s+i)).name);
            if(strcmp((*(s+i)).name, target) == 0){ // (*(s+i)).name is it an address too??
                removal_pos = i;
                break;
            }
        }
        if(removal_pos != -1){
            for(i=removal_pos;i<*size-1;i++){
                strcpy((*(s+i)).name, (*(s+i+1)).name);
                (*(s+i)).id = (*(s+i+1)).id;
            }
            success = 0;
            (*size)--;
        }
    }
    return success;
}

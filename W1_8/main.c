#include <stdio.h>
int main()
{
    int salary, merit;
    printf("Enter the salary: \n");
    scanf("%d", &salary);
    printf("Enter the merit: \n");
    scanf("%d", &merit);

    char grade;
    if(salary>799)
        grade = 'A';
    else if(700<=salary && salary<=799){
        if(merit<20)
            grade = 'B';
        else
            grade = 'A';
            printf("The grade: %c\n", grade);
    }
    else if(649<salary && salary<700)
        grade = 'B';
    else if(600<=salary && salary<=649){
        if(merit<10)
            grade = 'C';
        else
            grade = 'B';
    }
    else
        grade = 'C';

    printf("The grade: %c\n", grade);
    return 0;
}

#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[5];

    printf("Enter details of 5 employees:\n");

    for(int i=0;i<5;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&e[i].id);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\n===== EMPLOYEE DETAILS =====\n");

    for(int i=0;i<5;i++)
    {
        printf("\nID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nSalary: %.2f\n",e[i].salary);
    }

    return 0;
}
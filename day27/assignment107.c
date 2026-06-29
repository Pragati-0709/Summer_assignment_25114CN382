#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d",&e.id);

    printf("Enter Name: ");
    scanf("%s",e.name);

    printf("Enter Basic Salary: ");
    scanf("%f",&e.basic);

    e.hra = 0.20 * e.basic;
    e.da  = 0.10 * e.basic;
    e.gross = e.basic + e.hra + e.da;

    printf("\nSalary Details\n");
    printf("Gross Salary = %.2f",e.gross);

    return 0;
}
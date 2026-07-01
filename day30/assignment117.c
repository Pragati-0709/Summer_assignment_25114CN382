#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];

    printf("Enter details of 5 students:\n");

    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll No: ");
        scanf("%d",&s[i].roll);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(int i=0;i<5;i++)
    {
        printf("\nRoll No: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }

    return 0;
}
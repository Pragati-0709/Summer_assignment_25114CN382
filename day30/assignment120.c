#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    printf("\n===== STUDENT RECORDS =====\n");

    for(int i=0;i<n;i++)
    {
        printf("\nRoll No: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }
}

void search(struct Student s[], int n, int roll)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found");
            printf("\nRoll No: %d",s[i].roll);
            printf("\nName: %s",s[i].name);
            printf("\nMarks: %.2f\n",s[i].marks);
            return;
        }
    }

    printf("\nStudent Not Found\n");
}

int main()
{
    struct Student s[5];
    int roll;

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

    display(s,5);

    printf("\nEnter Roll No to Search: ");
    scanf("%d",&roll);

    search(s,5,roll);

    return 0;
}
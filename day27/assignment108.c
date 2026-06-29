#include<stdio.h>

int main()
{
    char name[50];
    int roll;
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    printf("========== MARKSHEET GENERATION SYSTEM ==========\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter marks of 5 subjects (out of 100):\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\n\n========== STUDENT MARKSHEET ==========\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);

    printf("\nMarks Obtained:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d : %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks : %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if(grade == 'F')
        printf("Result     : FAIL\n");
    else
        printf("Result     : PASS\n");

    return 0;
}
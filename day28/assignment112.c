#include<stdio.h>
#include<string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c;
    char searchName[50];
    int choice;

    printf("========== CONTACT MANAGEMENT SYSTEM ==========\n");

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter Name: ");
                scanf(" %[^\n]",c.name);

                printf("Enter Phone Number: ");
                scanf("%s",c.phone);

                printf("Enter Email: ");
                scanf("%s",c.email);

                printf("\nContact Saved Successfully!\n");
                break;

            case 2:

                printf("\n===== CONTACT DETAILS =====\n");
                printf("Name  : %s\n",c.name);
                printf("Phone : %s\n",c.phone);
                printf("Email : %s\n",c.email);

                break;

            case 3:

                printf("Enter Name to Search: ");
                scanf(" %[^\n]",searchName);

                if(strcmp(searchName,c.name)==0)
                {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n",c.name);
                    printf("Phone : %s\n",c.phone);
                    printf("Email : %s\n",c.email);
                }
                else
                {
                    printf("\nContact Not Found!\n");
                }

                break;

            case 4:

                printf("\nThank You for Using Contact Management System!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    }while(choice!=4);

    return 0;
}
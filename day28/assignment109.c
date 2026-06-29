#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b;
    int searchId;

    printf("========== LIBRARY MANAGEMENT SYSTEM ==========\n");

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    printf("\n===== BOOK DETAILS =====\n");
    printf("Book ID    : %d\n", b.id);
    printf("Title      : %s\n", b.title);
    printf("Author     : %s\n", b.author);
    printf("Price      : %.2f\n", b.price);

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    if(searchId == b.id)
    {
        printf("\nBook Found!\n");
        printf("Book ID    : %d\n", b.id);
        printf("Title      : %s\n", b.title);
        printf("Author     : %s\n", b.author);
        printf("Price      : %.2f\n", b.price);
    }
    else
    {
        printf("\nBook Not Found!\n");
    }

    return 0;
}
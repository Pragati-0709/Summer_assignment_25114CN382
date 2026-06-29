#include<stdio.h>

int main()
{
    int accountNo, choice;
    char name[50];
    float balance = 0, amount;

    printf("========== BANK ACCOUNT SYSTEM ==========\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nCurrent Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;

                printf("Amount Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\n===== ACCOUNT DETAILS =====\n");
                printf("Account Number : %d\n", accountNo);
                printf("Account Holder : %s\n", name);
                printf("Balance        : %.2f\n", balance);
                break;

            case 5:
                printf("\nThank You for Using the Bank Account System!\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}
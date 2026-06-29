#include<stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    printf("========== TICKET BOOKING SYSTEM ==========\n");

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Booking Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 2:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if(seats <= (totalSeats - bookedSeats) && seats > 0)
                {
                    bookedSeats += seats;
                    printf("Booking Successful!\n");
                }
                else
                {
                    printf("Sorry! Not enough seats available.\n");
                }
                break;

            case 3:
                printf("Enter number of seats to cancel: ");
                scanf("%d", &seats);

                if(seats <= bookedSeats && seats > 0)
                {
                    bookedSeats -= seats;
                    printf("Cancellation Successful!\n");
                }
                else
                {
                    printf("Invalid number of seats.\n");
                }
                break;

            case 4:
                printf("\n===== BOOKING DETAILS =====\n");
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 5:
                printf("\nThank You for Using the Ticket Booking System!\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}
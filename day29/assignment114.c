#include<stdio.h>

int main()
{
    int arr[100], n;
    int choice, i;
    int max, min, sum = 0;
    int key, found;

    printf("========== ARRAY OPERATIONS ==========\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display Array\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Find Sum\n");
        printf("5. Find Average\n");
        printf("6. Search Element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Array Elements: ");

                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);

                printf("\n");
                break;

            case 2:

                max = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }

                printf("Maximum Element = %d\n", max);
                break;

            case 3:

                min = arr[0];

                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }

                printf("Minimum Element = %d\n", min);
                break;

            case 4:

                sum = 0;

                for(i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d\n", sum);
                break;

            case 5:

                sum = 0;

                for(i = 0; i < n; i++)
                    sum += arr[i];

                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 6:

                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");

                break;

            case 7:

                printf("Thank You!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}
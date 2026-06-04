#include<stdio.h>
#include<math.h>

int main()
{
    int n, c = 0, num, num_1, r = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    if(n == 0)
        c = 1;

    while(n != 0)
    {
        n = n / 10;
        c++;
    }

    num_1 = num;

    while(num != 0)
    {
        r += (int)(pow(num % 10, c) + 0.5);
        num /= 10;
    }

    if(r == num_1)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");

    return 0;
}
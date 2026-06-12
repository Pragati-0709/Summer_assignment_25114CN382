#include<stdio.h>

int armstrong(int n)
{
    int temp = n, digits = 0, rem, sum = 0;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        int power = 1;
        for(int i = 1; i <= digits; i++)
        {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}
#include<stdio.h>

int main()
{
    int n, a = 0, b = 1, fib;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        fib = a + b;
        a = b;
        b = fib;
    }

    return 0;
}
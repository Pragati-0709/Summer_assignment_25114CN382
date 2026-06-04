#include<stdio.h>

int main()
{
    int n, a = 0, b = 1, fib,nth;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(int i = 1; i <= n; i++)
    {
        nth=a;
        printf("%d ", a);

        fib = a + b;
        a = b;
        b = fib;
    }
    printf("the nth term of the series is %d", nth);

    return 0;
}
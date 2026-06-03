#include<stdio.h>
int main()
{
    //gcd of two numbers
    int a,b,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Euclidean algorithm
    while(b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    printf("GCD = %d", a);
    return 0;
}
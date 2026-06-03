#include<stdio.h>(
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    //prime no 
    if(n==1)
    {
        printf("1 is neither prime nor composite");
    }
    else if(n==2)
    {
        printf("2 is a prime number");
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                break;
            }
        }
        if(i>n/2)
        {
            printf("%d is a prime number",n);
        }
    }
    return 0;
}

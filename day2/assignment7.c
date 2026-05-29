#include<stdio.h>
int main()
{
    int n, i,m=1;

    printf("Enter no: ");
    scanf("%d",&n);

    while(n!=0)
    {
        i=n%10;
        m=m*i;
        n=n/10;
    }
    printf("product of digits is %d",m);
    return 0;
}
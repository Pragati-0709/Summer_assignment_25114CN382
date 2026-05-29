#include<stdio.h>
int main()
{
    int n, i, m=0;

    printf("Enter no: ");
    scanf("%d",&n);

    while(n!=0)
    {
        i=n%10;
        m=m*10+i;
        n=n/10;
    }
    printf("Reverse of no is %d",m);
    return 0;
}
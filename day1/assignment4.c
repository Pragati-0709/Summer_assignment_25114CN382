#include<stdio.h>
int main()
{
    int n,d,c=0;
    printf("Enter no: ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        printf("%d ",d);
        n=n/10;
        c++;
    }
    printf("\nTotal digits: %d",c);

    return 0;
}
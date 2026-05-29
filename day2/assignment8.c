#include<stdio.h>
int main()
{
    int n, i, m=0, num;

    printf("Enter no: ");
    scanf("%d",&n);
    num=n;

    while(n!=0)
    {
        i=n%10;
        m=m*10+i;
        n=n/10;
    }
    printf("Reverse of no is %d",m);
if(num==m)
    printf("\nThe number is palindrome");
else
    printf("\nThe number is not palindrome");
    return 0;
}
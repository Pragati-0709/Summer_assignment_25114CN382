#include<stdio.h>
int sum(int a,int b)
{
    return (a+b);

}
int main()
{
    int a,b;
    printf("enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("sum of the 2 no is:%d",sum(a,b));
    return 0;
}
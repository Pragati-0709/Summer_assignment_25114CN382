#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("enter the two numbers: ");
    scanf("%d%d", &a, &b);
    lcm = (a > b) ? a : b; // start with the greater number
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
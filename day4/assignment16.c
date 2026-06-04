#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for(int i = 1; i <= n; i++)
    {
        int num = i;
        int temp = i;
        int c = 0;
        int r = 0;

        // Count digits
        while(temp != 0)
        {
            temp /= 10;
            c++;
        }

        temp = i;

        // Armstrong sum
        while(temp != 0)
        {
            r += (int)(pow(temp % 10, c) + 0.5);
            temp /= 10;
        }

        if(r == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
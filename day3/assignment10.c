#include<stdio.h>

int main()
{
    int n, i, j, m;

    printf("Enter no: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);

    for(i = 2; i <= n; i++)
    {
        m = 0;

        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                m = 1;
                break;
            }
        }

        if(m == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
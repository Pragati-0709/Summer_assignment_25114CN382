#include<stdio.h>

int main()
{
    int a[3][3];

    printf("Enter matrix:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int j=0;j<3;j++)
    {
        int sum = 0;

        for(int i=0;i<3;i++)
        {
            sum += a[i][j];
        }

        printf("Sum of Column %d = %d\n",j+1,sum);
    }

    return 0;
}
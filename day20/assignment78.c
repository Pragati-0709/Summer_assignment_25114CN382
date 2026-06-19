#include<stdio.h>

int main()
{
    int a[3][3];
    int flag = 1;

    printf("Enter matrix:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}
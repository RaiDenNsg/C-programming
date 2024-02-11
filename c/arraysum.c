#include <stdio.h>

int main() 
{
    int m1[3][3],m2[3][3],sum[3][3];
    int i,j;
    printf("Enyter the Elements in 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }printf("Enyter the Elements in 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Adding two matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("Displaying the sum\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ", sum[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
#include <stdio.h>

int main() 
{
    int m1[3][3],m2[3][3],mult[3][3];
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
    printf("multiplying two matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mult[i][j]=m1[i][j]*m2[i][j];
        }
    }
    printf("Displaying the multiplication\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d   ", mult[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
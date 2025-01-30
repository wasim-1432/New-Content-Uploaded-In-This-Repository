#include<stdio.h>
int main()
{
    int A[3][3],C[3][3],i,j;
    printf("Enter the elements of the matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            C[i][j]=A[j][i];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
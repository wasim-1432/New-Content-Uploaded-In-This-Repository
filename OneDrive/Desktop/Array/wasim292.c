#include<stdio.h>
int main()
{
    int i,arr[10],sum=0;
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("Average is=%f",sum/10.0);
    printf("\n");
    return 0;
}
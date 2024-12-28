#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum is=%d",sum);
    printf("\n");
    return 0;
}
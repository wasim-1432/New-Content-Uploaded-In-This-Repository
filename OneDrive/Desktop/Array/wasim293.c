#include<stdio.h>
int main()
{
    int arr[10],i,sum1=0,sum2=0;
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    printf("Sum of Even numbers=%d\n",sum1);
    printf("Sum of Odd numbers=%d",sum2);
    printf("\n");
    return 0;
}
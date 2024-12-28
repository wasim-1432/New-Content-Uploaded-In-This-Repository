#include<stdio.h>
int main()
{
    int arr[10],i,temp;
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(i=0;i<10;i++)
    {
        if(i==9)
        {
            printf("Smallest number=%d",arr[i]);
        }
    }
    printf("\n");
    return 0;
}
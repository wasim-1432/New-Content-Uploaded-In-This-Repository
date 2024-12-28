#include<stdio.h>
int Count_Duplicate_Values(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers of the array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Total duplicates element is=%d",Count_Duplicate_Values(arr,size));
    printf("\n");
    return 0;
}
int Count_Duplicate_Values(int arr[],int size)
{
    int temp,i,round,count=0;
    for(round=0;round<=size-2;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    return count;
}
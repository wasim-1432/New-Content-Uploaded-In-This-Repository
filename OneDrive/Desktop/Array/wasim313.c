#include<stdio.h>
int Sort_Of_The_Array(int arr[],int size);
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
    Sort_Of_The_Array(arr,size);
    printf("\n");
    return 0;
}
int Sort_Of_The_Array(int arr[],int size)
{
    int i,temp,round;
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
        printf("%d ",arr[i]);
    }
}
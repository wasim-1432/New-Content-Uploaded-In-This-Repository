#include<stdio.h>
int Rotate_Of_The_Array(int arr[],int size,int d,int n);
int main()
{
    int size,i,d,n;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers of the array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Rotation(1 for right/-1 for left\n");
    scanf("%d",&d);
    printf("Rotation times\n");
    scanf("%d",&n);
    Rotate_Of_The_Array(arr,size,d,n);
    printf("\n");
    return 0;
}
int Rotate_Of_The_Array(int arr[],int size,int d,int n)
{
    int shiftcount,temp,i;
    if(d==1)
    {
        for(shiftcount=0;shiftcount<n;shiftcount++)
        {
            temp=arr[size-1];
            for(i=size-1;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[i]=temp;
        }
    }
    else if(d==-1)
    {
        for(shiftcount=0;shiftcount<n;shiftcount++)
        {
            temp=arr[0];
            for(i=0;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[i]=temp;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
#include<stdio.h>
int Swap_Two_Numbers_Of_The_Array(int arr[],int size,int n1,int n2);
int main()
{
    int size,i,n1,n2;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers of the array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter any two indices\n");
    scanf("%d%d",&n1,&n2);
    Swap_Two_Numbers_Of_The_Array(arr,size,n1,n2);
    printf("\n");
    return 0;
}
int Swap_Two_Numbers_Of_The_Array(int arr[],int size,int n1,int n2)
{
    int temp,i;
    temp=arr[n1];
    arr[n1]=arr[n2];
    arr[n2]=temp;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
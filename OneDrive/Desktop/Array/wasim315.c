#include<stdio.h>
int First_Adjacent_Duplicate_Values(int arr[],int size);
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
    printf("First Adjacent Duplicate value=%d",First_Adjacent_Duplicate_Values(arr,size));
    printf("\n");
    return 0;
}
int First_Adjacent_Duplicate_Values(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }

}
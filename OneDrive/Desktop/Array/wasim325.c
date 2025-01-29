#include<stdio.h>
int Count_Frequency(int A[],int size);
int Sort_Array(int A[],int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int A[size],i;
    printf("Enter the element of the array\n");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&A[i]);
    }
    Count_Frequency(A,size);
    printf("\n");
    return 0;
}
int Count_Frequency(int A[],int size)
{
    int i,j,count;
    Sort_Array(A,size);
    for(i=0;i<=size-1;i++)
    {
        count=0;
        for(j=0;j<=size-1;j++)
        {
            if(A[i]==A[j])
            {
                count++;
            }
        }
        if(A[i]!=A[i+1])
        {
            printf("%d-%d\n",A[i],count);
        }
    }
}
int Sort_Array(int A[],int size)
{
    int round,i;
    for(round=0;round<=size-2;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }
    printf("Frequencies of Each element\n");
}
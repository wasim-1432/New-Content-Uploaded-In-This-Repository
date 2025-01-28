#include<stdio.h>
void Merge_Two_Given_Array(int A[],int B[],int size,int C[]);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int A[size],B[size],i,j,C[2*size];
    printf("Enter the first array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the second array elements\n");
    for(j=0;j<size;j++)
    {
        scanf("%d",&B[j]);
    }
    Merge_Two_Given_Array(A,B,size,C);
    printf("\n");
    return 0;
}
void Merge_Two_Given_Array(int A[],int B[],int size,int C[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        C[k]=B[j];
        j++;
        k++;
    }
    for(k=0;k<2*size;k++)
    {
        printf("%d ",C[k]);
    }
}
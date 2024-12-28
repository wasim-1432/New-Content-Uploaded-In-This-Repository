#include<stdio.h>
int main()
{
    int arr[10],i,round,temp,crr[10];
    printf("Enter any 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        crr[i]=arr[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",crr[i]);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
int Convert_Binary_To_Decimal(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Convert_Binary_To_Decimal(n);
    printf("\n");
    return 0;
}
int Convert_Binary_To_Decimal(int n)
{
    if(n!=0)
    {
        Convert_Binary_To_Decimal(n/2);
        printf("%d",n%2);
    }
}
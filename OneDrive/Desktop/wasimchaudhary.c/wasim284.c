#include<stdio.h>
int Count_Digit(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Total Digits=%d",Count_Digit(n));
    printf("\n");
    return 0;
}
int Count_Digit(int n)
{
    if(n!=0)
    {
        return Count_Digit(n/10)+1;
    }
}
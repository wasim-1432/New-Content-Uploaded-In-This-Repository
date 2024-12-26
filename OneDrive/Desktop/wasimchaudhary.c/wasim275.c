#include<stdio.h>
int Sum_Of_Digits_Of_A_Given_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Sum of digits=%d",Sum_Of_Digits_Of_A_Given_Number(n));
    printf("\n");
    return 0;
}
int Sum_Of_Digits_Of_A_Given_Number(int n)
{
    if(n!=0)
    {
        return n%10+Sum_Of_Digits_Of_A_Given_Number(n/10);
    }
}
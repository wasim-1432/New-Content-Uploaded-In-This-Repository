#include<stdio.h>
int Calculate_Factorial_Of_A_Given_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Factorial is=%d",Calculate_Factorial_Of_A_Given_Number(n));
    printf("\n");
    return 0;
}
int Calculate_Factorial_Of_A_Given_Number(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*Calculate_Factorial_Of_A_Given_Number(n-1);
}
#include<stdio.h>
int Sum_Of_First_N_Square_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Sum of Square is=%d",Sum_Of_First_N_Square_Natural_Numbers(n));
    printf("\n");
    return 0;
}
int Sum_Of_First_N_Square_Natural_Numbers(int n)
{
    if(n!=0)
    {
        return n*n+Sum_Of_First_N_Square_Natural_Numbers(n-1);
    }
}
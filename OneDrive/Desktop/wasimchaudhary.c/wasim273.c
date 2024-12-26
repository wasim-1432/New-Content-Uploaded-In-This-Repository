#include<stdio.h>
int Sum_Of_First_N_Even_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Sum of Even number is=%d",Sum_Of_First_N_Even_Numbers(n));
    printf("\n");
    return 0;
}
int Sum_Of_First_N_Even_Numbers(int n)
{
    if(n!=0)
    {
        return 2*n+Sum_Of_First_N_Even_Numbers(n-1);
    }
}
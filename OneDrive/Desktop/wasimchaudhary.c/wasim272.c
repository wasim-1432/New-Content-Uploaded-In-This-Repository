#include<stdio.h>
int Sum_Of_First_N_Odd_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Sum of Odd number=%d",Sum_Of_First_N_Odd_Numbers(n));
    printf("\n");
    return 0;
}
int Sum_Of_First_N_Odd_Numbers(int n)
{
    if(n!=0)
    {
        return (2*n-1)+Sum_Of_First_N_Odd_Numbers(n-1);
    }
}
#include<stdio.h>
int Sum_of_First_N_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Sum is=%d",Sum_of_First_N_Natural_Numbers(n));
    printf("\n");
    return 0;
}
int Sum_of_First_N_Natural_Numbers(int n)
{
    if(n!=0)
    {
        return n+Sum_of_First_N_Natural_Numbers(n-1);
    }
}
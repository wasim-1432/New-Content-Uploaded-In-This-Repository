#include<stdio.h>
int Print_Square_Of_First_N_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_Square_Of_First_N_Natural_Numbers(n);
    printf("\n");
    return 0;
}
int Print_Square_Of_First_N_Natural_Numbers(int n)
{
    if(n!=0)
    {
        Print_Square_Of_First_N_Natural_Numbers(n-1);
        printf("%d ",n*n);
    }
}
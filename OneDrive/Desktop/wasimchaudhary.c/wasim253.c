#include<stdio.h>
int Print_First_N_Odd_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_First_N_Odd_Numbers(n);
    printf("\n");
    return 0;
}
int Print_First_N_Odd_Numbers(int n)
{
    if(n!=0)
    {
        Print_First_N_Odd_Numbers(n-1);
        printf("%d\n",2*n-1);
    }
}
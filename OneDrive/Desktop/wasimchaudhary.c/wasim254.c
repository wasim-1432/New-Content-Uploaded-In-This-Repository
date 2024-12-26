#include<stdio.h>
int Print_Firs_N_Odd_Numbers_In_Reverse_Order(int n);
int main()
{
    int n;
    printf("Enter any nuber\n");
    scanf("%d",&n);
    Print_Firs_N_Odd_Numbers_In_Reverse_Order(n);
    printf("\n");
    return 0;
}
int Print_Firs_N_Odd_Numbers_In_Reverse_Order(int n)
{
    if(n!=0)
    {
        printf("%d\n",2*n-1);
        Print_Firs_N_Odd_Numbers_In_Reverse_Order(n-1);
    }
}
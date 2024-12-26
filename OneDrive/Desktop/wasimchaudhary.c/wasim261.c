#include<stdio.h>
int Print_N_Even_Numbers_In_Reverse_Order(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_N_Even_Numbers_In_Reverse_Order(n);
    printf("\n");
    return 0;
}
int Print_N_Even_Numbers_In_Reverse_Order(int n)
{
    if(n!=0)
    {
        printf("%d\n",2*n);
        Print_N_Even_Numbers_In_Reverse_Order(n-1);
    }
}
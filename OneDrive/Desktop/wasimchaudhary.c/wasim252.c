#include<stdio.h>
int Print_First_N_Natural_Numbers_In_Reverse_Order(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_First_N_Natural_Numbers_In_Reverse_Order(n);
    printf("\n");
    return 0;
}
int Print_First_N_Natural_Numbers_In_Reverse_Order(int n)
{
    if(n!=0)
    {
        printf("%d\n",n);
        Print_First_N_Natural_Numbers_In_Reverse_Order(n-1);
    }
}
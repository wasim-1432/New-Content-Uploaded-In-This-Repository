#include<stdio.h>
int Print_N_Even_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any nmber\n");
    scanf("%d",&n);
    Print_N_Even_Natural_Numbers(n);
    printf("\n");
    return 0;
}
int Print_N_Even_Natural_Numbers(int n)
{
    if(n!=0)
    {
        Print_N_Even_Natural_Numbers(n-1);
        printf("%d\n",2*n);
    }
}
#include<stdio.h>
int Print_First_N_Term_Of_Fibonacci_Series(int n);
int main()
{
    int n,i;
    printf("Enter any two number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",Print_First_N_Term_Of_Fibonacci_Series(i));
    }
    printf("\n");
    return 0;
}
int Print_First_N_Term_Of_Fibonacci_Series(int n)
{
    if(n==0 || n==1)
        return n;
    return Print_First_N_Term_Of_Fibonacci_Series(n-1)+Print_First_N_Term_Of_Fibonacci_Series(n-2);
}
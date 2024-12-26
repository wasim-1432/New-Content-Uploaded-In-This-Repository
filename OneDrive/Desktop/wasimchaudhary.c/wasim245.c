#include<stdio.h>
int Print_N_Number(int n);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_N_Number(a);
    printf("\n");
    return 0;
}
int fact(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
int Print_N_Number(int n)
{ 
    int sum=0;
    while(n)
    {
        sum=sum+fact(n)/n;
        n--;
    }
    printf("Required Answer=%d",sum);
}

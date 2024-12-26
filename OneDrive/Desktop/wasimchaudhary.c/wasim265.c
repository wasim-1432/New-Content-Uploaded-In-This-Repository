#include<stdio.h>
int Reverse_of_Number(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Reverse_of_Number(n);
    printf("\n");
    return 0;
}
int Reverse_of_Number(int n)
{
    if(n!=0)
    {
        printf("%d",n%10);
        Reverse_of_Number(n/10);
    }
}
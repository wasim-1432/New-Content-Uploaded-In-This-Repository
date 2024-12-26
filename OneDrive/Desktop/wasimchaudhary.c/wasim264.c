#include<stdio.h>
int Decimal_To_Octal(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Decimal_To_Octal(n);
    printf("\n");
    return 0;
}
int Decimal_To_Octal(int n)
{
    if(n!=0)
    {
        Decimal_To_Octal(n/8);
        printf("%d",n%8);
    }
}
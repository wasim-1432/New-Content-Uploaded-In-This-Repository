#include<stdio.h>
int Power_Of_Given_Number(int n,int p);
int main()
{
    int n,p;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Enter the power\n");
    scanf("%d",&p);
    printf("Required Answer is=%d",Power_Of_Given_Number(n,p));
    printf("\n");
    return 0;
}
int Power_Of_Given_Number(int n,int p)
{
    if(p!=1)
    {
        return Power_Of_Given_Number(n,p-1)*n;
    }
}
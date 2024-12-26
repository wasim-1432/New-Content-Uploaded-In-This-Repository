#include<stdio.h>
int Calculate_HCF_Of_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    printf("HCF is=%d",Calculate_HCF_Of_Two_Given_Numbers(a,b));
    printf("\n");
    return 0;
}
int Calculate_HCF_Of_Two_Given_Numbers(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        return Calculate_HCF_Of_Two_Given_Numbers(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        return Calculate_HCF_Of_Two_Given_Numbers(a,b%a);
    }
}
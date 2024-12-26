#include<stdio.h>
int Print_Pascal_Triangle(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    Print_Pascal_Triangle(a);
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
int Print_Pascal_Triangle(int a)
{
    int i,j,s=1,k,t,p;
    for(i=1;i<=a;i++)
    {
        k=1;
        t=1;
        p=0;
        for(j=1;j<=2*a-1;j++)
        {
            if(j>=(a+1)-i && j<=(a-1)+i && k)
            {
                printf("%d",fact(i-t)/fact(i-t-p)/fact(p));
                k=0;
                p++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
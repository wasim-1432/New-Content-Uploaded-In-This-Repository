#include<stdio.h>
void Armstrong_Number_Between_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Armstrong_Number_Between_Given_Two_Numbers(a,b);
    printf("\n");
    return 0;
}
void Armstrong_Number_Between_Given_Two_Numbers(int a,int b)
{
    int i,r,x,t,count,y,p,sum;
    for(x=a;x<=b;x++)
    {
        t=x;
        count=0;
        sum=0;
        while(t)
        {
            count++;
            t=t/10;
        }
        for(y=x;y!=0;y=y/10)
        {
            r=y%10;
            p=1;
            for(i=1;i<=count;i++)
            {
                p=p*r;
            }
            sum=sum+p;
        }
        if(sum==x)
        {
            printf("%d ",sum);
        }
    }
}
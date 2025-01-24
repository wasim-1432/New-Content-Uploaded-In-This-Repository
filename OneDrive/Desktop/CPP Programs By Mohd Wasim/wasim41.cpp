#include<iostream>
using namespace std;
int Print_Prime_Number_Between_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Print_Prime_Number_Between_Two_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Print_Prime_Number_Between_Two_Numbers(int a,int b)
{
    int i,l;
    cout<<"Prime number between "<<a<<" and "<<b<<endl;
    for(l=a;l<=b;l++)
    {
        i=2;
        while(i<=l)
        {
            if(l%i==0)
            {
                break;
            }
            i++;
        }
        if(l==i)
        {
            cout<<l<<endl;
        }
    }
}
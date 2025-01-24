#include<iostream>
using namespace std;
int Given_Number_In_Fibonacci_Series(int n);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    Given_Number_In_Fibonacci_Series(a);
    cout<<endl;
    return 0;
}
int Given_Number_In_Fibonacci_Series(int n)
{
    int a=0,b=1,s=0;
    while(s<=n)
    {
        if(s==n)
        {
            break;
        }
        s=a+b;
        a=b;
        b=s;
    }
    if(s==n)
    {
        cout<<"Given number is a term of Fibonacci series";
    }
    else
    {
        cout<<"Not Fibonacci terms";
    }
}
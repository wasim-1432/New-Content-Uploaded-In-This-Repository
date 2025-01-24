#include<iostream>
using namespace std;
int Swap_Given_Two_Numbers(int & a,int & b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Swap_Given_Two_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Swap_Given_Two_Numbers(int & a,int & b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"A="<<a<<" B= "<<b;
}
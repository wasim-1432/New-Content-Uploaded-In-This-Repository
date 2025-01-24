#include<iostream>
using namespace std;
int Add_Two_or_Three_Numbers(int,int,int=0);  //Default Arguments
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum of two numbers="<<Add_Two_or_Three_Numbers(a,b)<<endl;
    cout<<"Enter any three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of three numbers="<<Add_Two_or_Three_Numbers(a,b,c);
    cout<<endl;
    return 0;
}
int Add_Two_or_Three_Numbers(int a,int b,int c)
{
    return a+b+c;
}
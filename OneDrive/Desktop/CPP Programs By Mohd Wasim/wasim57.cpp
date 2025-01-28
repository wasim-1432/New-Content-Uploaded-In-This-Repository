#include<iostream>
using namespace std;
float Add(int a,float b);
float Add(float a,int b);
int Add(int a,int b);
float Add(float a,float b);
int main()
{
    float a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum is="<<Add(a,b);
    cout<<endl;
    return 0;
}
float Add(int a,float b)
{
    return a+b;
}
float Add(float a,int b)
{
    return a+b;
}
int Add(int a,int b)
{
    return a+b;
}
float Add(float a,float b)
{
    return a+b;
}
#include<iostream>
using namespace std;
int Add(int a,int b);
int Add(float a,float b);
int main()
{
    int x,y;
    cout<<"Enter any two numbers"<<endl;
    cin>>x>>y;
    Add(x,y);
    float a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Add(a,b);
    cout<<endl;
    return 0;
}
int Add(int a,int b)
{
    cout<<"Sum is="<<a+b;
}
int Add(float a,float b)
{
    cout<<"Sum is="<<a+b;
}
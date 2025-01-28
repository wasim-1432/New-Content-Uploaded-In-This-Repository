#include<iostream>
using namespace std;
int Maximum_Number(int a,int b);
int Maximum_Number(float a,float b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers(For Integer Numbers)"<<endl;
    cin>>a>>b;
    Maximum_Number(a,b);
    float x,y;
    cout<<"Enter any two numbers(For Real numbers)"<<endl;
    cin>>x>>y;
    Maximum_Number(x,y);
    cout<<endl;
    return 0;
}
int Maximum_Number(int a,int b)
{
    if(a>b)
    {
        cout<<"Maximum number is="<<a<<endl;
    }
    else
    {
        cout<<"Maximum number is="<<b<<endl;
    }
}
int Maximum_Number(float a,float b)
{
    if(a>b)
    {
        cout<<"Maximum number is="<<a<<endl;
    }
    else
    {
        cout<<"Maximum number is="<<b<<endl;
    }
}
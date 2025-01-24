#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Maximum is="<<a;
    }
    if(b>a)
    {
        cout<<"Maximum is="<<b;
    }
    if(a==b)
    {
        cout<<"Both numbers are same="<<a;
    }
    cout<<endl;
    return 0;
}
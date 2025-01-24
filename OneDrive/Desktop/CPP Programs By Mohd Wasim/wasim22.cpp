#include<iostream>
using namespace std;
int main()
{
    int a,i=2;
    cout<<"Enter any number"<<endl;
    cin>>a;
    while(i<=a)
    {
        if(a%i==0)
        {
            break;
        }
        i++;
    }
    if(i==a)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not Prime number";
    }
    cout<<endl;
    return 0;
}
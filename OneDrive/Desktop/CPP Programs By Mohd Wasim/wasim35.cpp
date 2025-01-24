#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter the 10 numbers"<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of given numbers="<<sum;
    cout<<endl;
    return 0;
}
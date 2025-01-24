#include<iostream>
using namespace std;
int X_Raised_To_The_Power_Y(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter the number"<<endl;
    cin>>x;
    cout<<"Enter the power"<<endl;
    cin>>y;
    cout<<"Required Answer= "<<X_Raised_To_The_Power_Y(x,y);
    cout<<endl;
    return 0;
}
int X_Raised_To_The_Power_Y(int x,int y)
{
    int s=1;
    while(y)
    {
        s=s*x;
        y--;
    }
    return s;
}
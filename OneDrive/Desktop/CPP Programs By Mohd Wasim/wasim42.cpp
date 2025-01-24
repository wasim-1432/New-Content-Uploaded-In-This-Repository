#include<iostream>
using namespace std;
int Heighest_Value_Digit_In_A_Given_Number(int n);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    Heighest_Value_Digit_In_A_Given_Number(a);
    cout<<endl;
    return 0;
}
int Heighest_Value_Digit_In_A_Given_Number(int n)
{
    int b,r,c;
    b=n;
    r=n%10;
    while(b)
    {
        c=b%10;
        if(c>=r)
        {
            r=c;
        }
        b=b/10;
    }
    cout<<"Heighest value digit in a given number="<<r;
}
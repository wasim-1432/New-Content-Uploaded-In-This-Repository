#include<iostream>
using namespace std;
int Print_Pascals_Triangle_N_Line(int n);
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    Print_Pascals_Triangle_N_Line(n);
    cout<<endl;
    return 0;
}
int Fact(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
int Print_Pascals_Triangle_N_Line(int n)
{
    int i,j,k,t;
    for(i=1;i<=n;i++)
    {
        k=1;
        t=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=5-i && j<=3+i && k)
            {
                cout<<Fact(i-1)/Fact(i-1-t)/Fact(t);
                t++;
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}
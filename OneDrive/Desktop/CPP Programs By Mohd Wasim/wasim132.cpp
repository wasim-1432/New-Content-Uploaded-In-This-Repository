#include<iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;
    public:
        fraction(long n=0,long d=0){numerator=n;denominator=d;}
        void showData()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
        fraction operator+(fraction F)
        {
            fraction temp;
            temp.numerator=numerator*F.denominator+F.numerator*denominator;
            temp.denominator=denominator*F.denominator;
            temp.Normalise();
            return temp;
        }
        fraction operator<(fraction F)
        {
            if(numerator/denominator<F.numerator/F.denominator)
            {
                cout<<"Second fraction is greater"<<endl;
            }
            else
            {
                cout<<"First fraction is greater"<<endl;
            }
        }
        void Normalise()
        {
            int i=2;
            while(i<=numerator && i<=denominator)
            {
                if(numerator%i==0 && denominator%i==0)
                {
                    numerator=numerator/i;
                    denominator=denominator/i;
                    continue;
                }
                i++;
            }
        }
};
int main()
{
    fraction f1(2,3),f2(1,55),f3;
    f1<f2;
    f3=f1+f2;
    f3.showData();
    cout<<endl;
    return 0;
}
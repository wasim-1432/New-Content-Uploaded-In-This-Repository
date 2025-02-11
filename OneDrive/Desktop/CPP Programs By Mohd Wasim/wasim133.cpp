#include<iostream>
using namespace std;
class Distance
{
    int km,m,cm;
    public:
        Distance(int x=0,int y=0,int z=0){km=x;m=y;cm=z;}
        void showData()
        {
            cout<<km<<":"<<m<<":"<<cm<<endl;
        }
        Distance operator+(Distance D)
        {
            Distance temp;
            temp.km=km+D.km;
            temp.m=m+D.m;
            temp.cm=cm+D.cm;
            temp.Normalise();
            return temp;
        }
        void Normalise()
        {
            m=m+cm/100;
            cm=cm%100;
            km=km+m/1000;
            m=m%1000;
        }
};
int main()
{
    Distance d1(12,999,102),d2(33,777,465),d3;
    d3=d1+d2;
    d3.showData();
    cout<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void setData(int,int,int);
        void showData();
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time T);
};
istream& operator>>(istream& din,Time T)
{
    din>>T.hr>>T.min>>T.sec;
    return din;
}
ostream& operator<<(ostream& dout,Time T)
{
    dout<<T.hr<<":"<<T.min<<":"<<T.sec;
    return dout;
}
void Time::setData(int x,int y,int z)
{
    hr=x;
    min=y;
    sec=z;
}
void Time::showData()
{
    cout<<hr<<":"<<min<<":"<<sec<<endl;
}
int main()
{
    Time t1,t2;
    t1.setData(12,34,55);
    t2.setData(1,23,58);
    t1.showData();
    cout<<t2;
    cout<<endl;
    return 0;
}
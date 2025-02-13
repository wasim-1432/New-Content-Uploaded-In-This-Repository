#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void setData(int,int,int);
        void showData();
        Time operator=(Time T)
        {
            hr=T.hr;
            min=T.min;
            sec=T.sec;
            return *this;
        }
};
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
    t1.setData(12,33,44);
    t2=t1;
    t2.showData();
    cout<<endl;
    return 0;
}
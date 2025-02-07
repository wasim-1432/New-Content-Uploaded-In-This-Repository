#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        Time()
        {
            hour=0;
            min=0;
            sec=0;
        }
        Time(int x,int y,int z)
        {
            hour=x;
            min=y;
            sec=z;
        }
        void showData()
        {
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
        void Normalize()
        {
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
        }
        Time operator+(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            temp.Normalize();
            return temp;
        }  
};
int main()
{
    Time t1(12,61,55),t2(12,23,55),t3;
    t1.Normalize();
    t2.Normalize();
    t3=t1+t2;
    t3.showData();
    cout<<endl;
    return 0;
}
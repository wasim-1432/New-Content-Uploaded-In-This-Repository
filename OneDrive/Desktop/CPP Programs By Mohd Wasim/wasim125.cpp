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
        Time operator>(Time T)
        {
            if(hour>T.hour)
            {
                cout<<"True";
            }
            else if(hour<T.hour)
            {
                cout<<"False";
            }
            else if(min>T.min)
            {
                cout<<"True";
            }
            else if(min<T.min)
            {
                cout<<"False";
            }
            else if(sec>T.sec)
            {
                cout<<"True";
            }
            else if(sec<T.sec)
            {
                cout<<"False";
            }
        }
};
int main()
{
    Time t1(12,61,55),t2(12,23,55);
    t1.Normalize();
    t2.Normalize();
    t1.showData();
    t2.showData();
    t2>t1;
    cout<<endl;
    return 0;
}
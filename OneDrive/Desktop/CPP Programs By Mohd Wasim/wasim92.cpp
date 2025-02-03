#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
        void normalize()
        {
            m=m+s/60;
            s=s%60;
            h=h+m%60;
            m=m/60;
            h=h%12;
        }
        Time add(Time T)
        {
            Time temp;
            temp.h=h+T.h;
            temp.m=m+T.m;
            temp.s=s+T.s;
            return temp;
        }
        bool is_greater(Time T)
        {
            if(h>T.h)
            {
                return true;
            }
            else if(h<T.h)
            {
                return false;
            }
            else if(m>T.m)
            {
                return true;
            }
            else if(m<T.m)
            {
                return false;
            }
            else if(s>T.s)
            {
                return true;
            }
            else if(s<T.s)
            {
                return false;
            }
        }
};
int main()
{
    Time t1,t2,t3,t4;
    t1.setTime(10,37,55);
    t1.normalize();
    t2.setTime(10,36,56);
    t2.normalize();
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
    t1.is_greater(t2);
    cout<<endl;
    return 0;
}

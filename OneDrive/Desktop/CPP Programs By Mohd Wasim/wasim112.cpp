#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_No;
        char student_Name[50];
        char parent_Name[50];
        int class_no;
        char mobile_no[12];
    public:
        Student(int r,char sn[],char pn[],int cn,char mo[])
        {
            roll_No=r;
            strcpy(student_Name,sn);
            strcpy(parent_Name,pn);
            class_no=cn;
            strcpy(mobile_no,mo);
        }
        void Display()
        {
            cout<<"Roll Number="<<roll_No<<" Student Name="<<student_Name<<" Parent Name="<<parent_Name<<" Class="<<class_no<<" Mobile Number="<<mobile_no<<endl;
        }
};
int main()
{
    Student s(2,"Rohit Yadav","Rohit Sharama",6,"9876543210");
    s.Display();
    cout<<endl;
    return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int book_Id;            //Instance Member variable
        char title[50];         //Instance Member Variable
        float price;            //Instance Member Variable
    public:
        Book()                  //Non parameterised Construcror
        {
            book_Id=1044;
            strcpy(title,"Fundamental Of Data Structure And Algorithm");
            price=200.8;
        }
        Book(int x,char str[],float p)       //Parameterised Constructor
        {
            book_Id=x;
            strcpy(title,str);
            price=p;
        }
        void showBookData()
        {
            cout<<"Book_ID="<<book_Id<<" Title="<<title<<" Price="<<price<<endl;
        }
};
int main()
{
    Book b1,b2(100044,"Fundamental Of Electrical Engineering",200.34);   //Objects
    b1.showBookData();
    b2.showBookData();
    cout<<endl;
    return 0;
}
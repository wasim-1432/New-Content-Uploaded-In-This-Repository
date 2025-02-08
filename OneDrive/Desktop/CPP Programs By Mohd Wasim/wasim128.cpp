#include<iostream>
using namespace std;
class Matrix
{
    private:
        int A[3][3];
    public:
        void inputData()
        {
            cout<<"Enter the element of the matrix"<<endl;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cin>>A[i][j];
                }
            }
        }
        void showData()
        {
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cout<<A[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix M)
        {
            Matrix temp;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]+M.A[i][j];
                }
            }
            return temp;
        }
        Matrix operator-(Matrix M)
        {
            Matrix temp;
            int i,j;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]-M.A[i][j];
                }
            }
            return temp;
        }
        Matrix operator*(Matrix M)
        {
            Matrix temp;
            int i,j,k,sum;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    for(k=0,sum=0;k<=2;k++)
                    {
                        sum=sum+A[i][k]*A[k][j];
                    }
                    temp.A[i][j]=sum;
                }
            }
            return temp;
        }
};
int main()
{
    Matrix m1,m2,m3;
    m1.inputData();
    m2.inputData();
    m3=m1*m2;
    m3.showData();
    cout<<endl;
    return 0;
}
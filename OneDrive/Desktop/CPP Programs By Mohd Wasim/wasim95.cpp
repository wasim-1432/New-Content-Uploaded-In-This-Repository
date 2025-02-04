#include<iostream>
using namespace std;
class Matrix
{
    private:
        int A[3][3],B[3][3];
    public:
        void input()
        {
            int i,j;
            cout<<"Enter the element of matrix"<<endl;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cin>>A[i][j];
                }
            }
        }
        void Display()
        {
            int i,j;
            cout<<"Required Answer is"<<endl;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cout<<A[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix Add(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]+M.A[i][j];
                }
            }
            return temp;
        }
        Matrix Sub(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.A[i][j]=A[i][j]-M.A[i][j];
                }
            }
            return temp;
        }
        Matrix Multiply(Matrix M)
        {
            Matrix temp;
            int sum;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    sum=0;
                    for(int k=0;k<=2;k++)
                    {
                        sum=sum+A[i][k]*M.A[k][j];
                    }
                    temp.A[i][j]=sum;
                }
            }
            return temp;
        }
        Matrix Transpose()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    B[i][j]=A[j][i];
                }
            }
        }
        void is_singular()
        {
            int s;
            s=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            if(s==0)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<"No";
            }
        }
};
int main()
{
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    m3=m1.Multiply(m2);
    m3.Display();
    m1.Transpose();
    m1.Display();
    m1.is_singular();
    cout<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class digit_row
{
    public:
    row(int n)
    {
     int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1 ;j<=n ; j++)
        {
           cout<<k<<" ";
        }
        cout<<endl;
        k+=10;
    }
    }
};

int main()
{
    digit_row r;
    r.row(5);
    return 0;
}
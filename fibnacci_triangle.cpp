#include<iostream>
using namespace std;

int main()
{
     int row , col;
     cout<<"Enter row="<<endl;
     cin>>row;
     cout<<"Enter the col="<<endl;
     cin>>col;

     for(int i =1; i<=row; i++)
     {
        for(int j=1; j<=col; j++)
        {
            if(j ==1 || j==2)
            {
                cout<<1<<" ";
            }
            else 
            {
                cout<<
            }
        }
     }

    return 0;
}
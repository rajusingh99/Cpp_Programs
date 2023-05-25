#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter no_of_row ="<<endl;
    cin>>row;

    cout<<"Enter col ="<<endl;
    cin>>col;

    for(int i =1; i<=row; i++)
    {
        for(int j =1; j<=col; j++)
        {
          cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
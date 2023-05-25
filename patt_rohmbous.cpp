#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter row";
    cin>>row;

    cout<<"Enter col";
    cin>>col;

    for(int i=0; i<row; i++)
    {
        int space =0;
        for(int k=0; k<i; k++)
        {
            cout<<" ";
            space++;
        }
        for(int j=0; j<row; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
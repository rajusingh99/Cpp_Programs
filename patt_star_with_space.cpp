#include<iostream>
using namespace std;

int main()
{
    int row;
    int col;
    cout<<"Enter row ="<<endl;
    cin>>row;

    cout<<"Enter col= "<<endl;
    cin>>col; 

    for(int i =1; i<=row; i++)
    {
        for(int j =1; j<=col; j++)
        {
             if((i==1) || (i== row) || (j==1) || (j==col) )
             {
                cout<<"*";
             }
          
             else{
                cout<<" ";
             }
            
        }
        cout<<endl;
    }
    return 0;
}
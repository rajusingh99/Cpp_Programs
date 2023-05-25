#include<iostream>
using namespace std;

int main()
{
    int s ;
    cout<<"enter start ="<<endl;
    cin>>s;

    int e;
    cout<<"enter end= "<<endl;
    cin>>e;

    int gap;
    cout<<"enter gap = "<<endl;
    cin>>gap;

    int cell;
     
    for(int i=s ; i<= e; i += gap)
    {
        int flag;
        cout<<i<<" ";
        cell = (5/9) * (i - 32);
        flag = cell;
        cout<<flag;
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    if(num % 2==0 )
    {
         goto printeven;
    }
    else 
    {
       goto  printodd;
    }

     printeven:
    {
        cout<<"this is even"<<endl;
        return 0;
    }
    
     printodd:
    {
        cout<<"this is odd"<<endl;
        return 0;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age= 18;

    if(age>=13)
    {
        if(age>=18)
        {
            cout<<"you are a adult"<<endl;
        }
        else
        {
             cout<<"you are teenager "<<endl;
        }
    }
    else
    {
       if(age>0)
       {
        cout<<"You are child "<<endl;
       }
       else
       {
        cout<<"age is invalid "<<endl;
       }
    }
   

    return 0;
}
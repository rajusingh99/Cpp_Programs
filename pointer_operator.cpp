#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1 , *b;
     b= &a;

    cout<<"Address of a= "<<b<<endl;
    cout<<"Address of a= "<<&a<<endl;
    cout<<"Address of b= "<<&b<<endl;
    cout<<" *b= "<<*b<<endl;

    return 0;
}
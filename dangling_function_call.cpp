#include<iostream>
using namespace std;

int *fun()
{
    int x =10;
    return &x;
}

int main()
{
    int * ans = fun();
    cout<<"ans = "<<*ans<<endl;   // ans points to something which is not valid anymore
    return 0;
}
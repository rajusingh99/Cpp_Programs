#include<iostream>
using namespace std;

int main()
{
    int a = 90;
    int &b = a;
   
    cout<<"&b ="<<&b<<endl;
    cout<<"b ="<<b<<endl;
     a++;
    return 0;
}
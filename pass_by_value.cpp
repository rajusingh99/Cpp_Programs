#include<iostream>
using namespace std;


int main()
{
// pass by value

  int a=5;
    int b =a;  // both pointing to different variable
    a++;
    cout<<"b= "<<b<<endl;
    cout<<"a= "<<a<<endl;
    return 0;
}

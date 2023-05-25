#include<iostream>
using namespace std;

void increament(int x, int y)
{
    x++;
    y = y + 5;
    cout<< x<< ": "<<y<<endl;
}

int main()
{
   int a =20;
   int b= 30;
   increament(a, b);
   
   cout<<a<<":"<<b<<endl;
    return 0;
}
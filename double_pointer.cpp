#include<iostream>
using namespace std;

int main()
{
   int a= 90;
   int * p1 = &a;
   int ** p2 = &p1;

   cout<<"address of a = "<<p1<<endl;
   cout<<"address of a = "<<&a<<endl;
   cout<<"address of a = "<<p1<<endl<<endl;

   cout<<"address of p1= "<<&p1<<endl;
   cout<<"value of p1= "<<p2<<endl<<endl;

   cout<<"VALUE OF A= "<<a<<endl;
   cout<<"VALUE OF A= "<<*p1<<endl;
   cout<<"VALUE OF A= "<<**p2<<endl;

   
   return 0;
    
}
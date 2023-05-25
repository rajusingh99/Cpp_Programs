#include<iostream>
using namespace std;

class A
{
    protected:
    int a =25;
      void print()
        {
            cout<<"This is protected class "<<endl;
        }
};

class B :public A
{

};

class C: public B
{

};

int main()
{
   C c;
   cout<<c.a<<endl;
   c.print();
    return 0;
}
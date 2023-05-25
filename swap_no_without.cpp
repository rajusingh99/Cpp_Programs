#include<iostream>
using namespace std;

class A
{
    public:
      void swaps(int a, int b)
      {
        cout<<"before a="<<a<<" ";
        cout<<"before b="<<b<<" "<<endl;
        a = a + b;
        b= a - b;
        a= a - b;

        cout<<"after a= "<<a<<" ";
        cout<<"after b= "<<b<<" "<<endl;
      }
      
};
 class B : public A
 {
    public: 
         
     void swaps(double a, double b)
      {
        cout<<"before a="<<a<<" ";
        cout<<"before b="<<b<<" "<<endl;
        a = a + b;
        b= a - b;
        a= a - b;

        cout<<"after a= "<<a<<" ";
        cout<<"after b= "<<b<<" "<<endl;
      }
       
 };
 
int main()
{
    B s;
    s.swaps(100.89,30.678);

    return 0;
}
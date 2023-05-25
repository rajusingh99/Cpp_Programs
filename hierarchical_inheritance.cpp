#include<iostream>
using namespace std;

class functions
{
    public:
      int a,b;
      void set()
      {
        a=5;
        b=3;
      }   

      void sum()
      {
        cout<< "sum of numbers = "<<a+b<<endl;
      }

};
class sub : public functions
{
    public:
    void subs()
    {
        cout<<"substract of numbers "<<a-b<<endl;
    }
      
};

class mul :public functions
{
    public:
     void mult()
     {
        cout<<"multiplication of numbers is "<<a*b<<endl;
     }
};
int main()
{
    mul m;
    m.set();
    m.mult();
   
   sub s;
   s.set();
   s.subs();

   functions f;
   f.set();
   f.sum();

    return 0;
}
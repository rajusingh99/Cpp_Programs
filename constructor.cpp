#include<iostream>
using namespace std;

class car
{
     int a;
    public:
   
     car()     // default constructor
     {
        a =0;
     }

      car(int i)   // parameterized  constructor
      {
        a = i;
      }

      void assign(int i)  // setter 
      {
        a =i;
      }

      void get()  // getter 
      {
        cout<<a;
      }     
};
int main()
{
     car c;
    c.assign(8);
   
    c.get();
    
    return 0;

}
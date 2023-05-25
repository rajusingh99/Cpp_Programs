#include<iostream>
using namespace std;

class result
{
    private:
    int marks;
    public:

    result (): marks(10) {} ;    // remember

      int operator ++()    // operator overloading 
      {
        marks= marks + 5;
      }
      void print()
      {
        cout<<"total marks is : "<<marks;
      }
};

int main()
{  
    result tt;
    ++tt;     // operator calling
    tt.print();
    return 0;
}
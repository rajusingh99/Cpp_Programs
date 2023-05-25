#include<iostream>
using namespace std;

class account
{
     public:
        static int rate ;    // declration
                           // static member variable
        int balance  =100; // instance variable 
        public: 
            static void set_rate(int a)
            {
                rate = a;
            }
};

int account ::rate   ;    // definition 

int main()
{
     account a1;

    a1.set_rate(56);
   cout<< a1.rate;
     
     
    // cout<< a1.rate<<endl;      // calling
  
    // cout<< a2.balance;
  
     
    return 0;

}
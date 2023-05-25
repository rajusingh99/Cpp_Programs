#include<iostream>

using namespace std;

class car
{
   public:
     void fun()
     {
        cout<<"car is not running"<<endl;
     }
     void fun(int n)
     {
        cout<<"car is starting"<<endl;
     }
     void fun(double x)
     {
        cout<<"car is running"<<endl;
     }

};
int main()
{
    car c1;
    c1.fun();
    c1.fun(5);
    c1.fun(2.4);
    return 0;
}
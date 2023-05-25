#include<iostream>
using namespace std;

class car
{
    public:
       int car_no;
       int model_no;
    //  void constru(int a, int b)
    //  {
    //     car_no = a;
    //     model_no = b;
    //  }  

     car(int p, int q)
     {
        car_no = p;
        model_no = q;
     }  
};

int main()
{
    //  car c1;
    //                       // having different name of class    
    //  c1.constru(8,90);
    // cout<< c1.car_no<<endl;
    //  cout<<c1.model_no;


    // having same name of class 
    car c2(56,78);
    cout<<c2.car_no<<endl;
    cout<<c2.model_no;
    return 0;
}
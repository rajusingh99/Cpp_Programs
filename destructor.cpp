#include<iostream>
using namespace std;

class b_tech
{
     float area;
     public:
         b_tech()
         {
            area =0;
         }

        b_tech(int a, int b)
         {
            area = a*b;
         }
        
        b_tech(float a, float b)
         {
            area = a*b;
         }
         ~b_tech()
         {
            cout<<"destructor is called"<<endl;
         }
       
       void get_area()
       {
        cout<<area<<endl;;
      
       } 

       void fun()
       {
        cout<<"it is function"<<endl;
       }
      
};

int main()
{
    b_tech b;
    b.get_area();
    
    return 0;
}
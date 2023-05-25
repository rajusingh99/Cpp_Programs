#include<iostream>
using namespace std;

class course
{
    private:
     int total_fee;
    

     public:
       void set_total_fee(int paid, int dues)
        {
            total_fee=paid+dues;
           
        }

       void get_total_fee()
       {
        cout<<total_fee;
       }

};

int main()
{   
    course c1;
    c1.set_total_fee(3000, 4000);

    c1.get_total_fee();

    return 0;
}
#include<iostream>
using namespace std;

class student
{
   private :
    int girls;
     
     public:
        student()      // default constructor
        {
            girls=90;
        }
        student (int a)    // parameterized constructor
        {
            girls=a;
        }
          student (student &num)   // copy constructor
        {  
            cout<<endl;
             cout<<"copy constructo called"<<endl;
            girls= num.girls;
        }
        void get_student()
        {
           
            cout<<"No of girls = "<<girls<<endl;
        }

};

int main()
{
   student x,y,z(2);   // construstor is called here
   x.get_student();
   y.get_student();
   z.get_student();

   student x1(z);  // copy constructor called
   x1.get_student();

    return 0;
}
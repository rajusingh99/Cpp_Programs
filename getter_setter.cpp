
// encapsulation
#include<iostream>
using namespace std;

class student
{
    private:
      int boys;
      int girls;

      public:
      int total_student;
        student (int b , int g)
       {
         boys=b;
         girls=g;
          total_student = boys + girls;
       }

       void get_no_of_student()        // getter method
       {
                 cout<<"boys is:"<< boys<<endl;
                 cout<<"girls is:"<< girls<<endl;
                 cout<<"total student: "<< total_student<<endl;
               
       }

       void setboys(int a)  // setter
       {
        boys=a;
       }

};

int main(){
    
    student s1(2,45);
    s1.get_no_of_student();

    cout<<endl;
   
     s1.setboys(5);
     s1.get_no_of_student();

    return 0;
}
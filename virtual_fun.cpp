#include<iostream>
using namespace std;

class teacher
{
    public:
       virtual void teach()
      {
        cout<<"Teacher is teaching by honestly "<<endl;
      }
      
};
 
class student : public teacher
{
   public:
     void teach()
     {
        cout<<"teacher teaches to students"<<endl;
     }
     
};

int main()
{
   //  teacher *t1;
   //  student s1;
   //  t1=&s1;
    
    //t1->teach();

    teacher *t= new student;
     
     t->teach();

    return 0;
}
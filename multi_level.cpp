#include<iostream>
using namespace std;

class teacher
{
    public:
     void teach()
     {
        cout<<"Teacher is teaching:"<<endl;
     }
};

class student : public teacher
{
    public:
     void study()
     {
        cout<<"student is studying "<<endl;
     }
};

 class Ram : public student
 {
    public:
       void work()
       {
        cout<<"I am Ram"<<endl;
       }      
 };
int main()
{
     Ram s;  // object creation of derived class
     s.teach();   // fun calling
  
    s.study();
     
     s.work();
    return 0;
}
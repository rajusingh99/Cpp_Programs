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
int main()
{
     student s;  // object creation of derived class
     s.teach();   // fun calling
  
    s.study();
    return 0;
}
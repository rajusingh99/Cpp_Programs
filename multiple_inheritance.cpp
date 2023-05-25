#include<iostream>
using namespace std;

class sem1
{ 
    public:
       int marks1;
        void set_marks1(int a)
        {
            marks1=a;
        }

        void get_marks1()
        {
            cout<<" I am marks1 "<<marks1<<endl;
        }
};

class sem2
{   
    public:
    int marks2;
      void set_marks2(int b)
      {
        marks2=b;
      }
      void get_marks2()
      {
        cout<<" I am marks2"<<marks2<<endl;
      }
};

class annual : public sem1,public sem2
{
  public:
    int total_marks;
    void sum()
    {
        total_marks=marks1 + marks2;
        cout<< "sum is "<<total_marks<<endl;
    }

};

int main()
{
    annual a;
    a.set_marks1(20);
    a.set_marks2(30);

    a.sum();
    
    return 0;

}
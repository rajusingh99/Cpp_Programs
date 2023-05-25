#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
       void show()
       {
        cout<< "This is show of student"<<endl;
       }
};

class teacher : public student 
{
    public:
       void show ()
       {
        cout<<"This is show of teacher"<<endl;
       }
};

int main()
{
      teacher t;
      t.show();
      student s;
      s.show();
    return 0;
}
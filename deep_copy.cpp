#include<iostream>
using namespace std;

 class rectangle 
 {
    public:
    int length;
    int *breath;
    int hypoteneous;

    rectangle ()
    {
        breath = new int;    // taking new int memory pointed by breath
    }

    int set_value(int a,  int b, int c)
    {
      length = a;
      *breath = b;
       hypoteneous = c;
    }

    void show()
    {
        cout<<"length= "<<length<<endl;
        breath = new int;
        cout<<"breath= "<<breath<<endl;
        cout<<"hypoteneous= "<<hypoteneous<<endl;
        cout<<endl;
    }

    rectangle(rectangle & num)
    {
        length = num.length;
        *breath = *(num.breath);
        hypoteneous = num.hypoteneous;
    }
 };

int main()
{
    rectangle r , s;
    r.set_value(4,5,8);
    r.show();

    s = r;
    s.show(); 

    return 0;

}
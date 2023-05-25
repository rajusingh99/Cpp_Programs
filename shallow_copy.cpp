#include<iostream>
using namespace std;

class box
{
     public:
      int length;
      int breath;
      int height;

      void set_value(int a, int b, int c)
      {
        length = a;
        breath = b;
        height = c;
      }

      void show()
      {
        cout<<"length= "<<length<<endl;
        cout<<"breath= "<<breath<<endl;
        cout<<"height= "<<height<<endl;
        cout<<endl;
      }

};

int main()
{
     box b1 , b2 ;
     b1.set_value(5,6,7);
     b1.show();

     b2 = b1;     // copying all data of objevt b1 into object b2;
     b2.show();

     


    return 0;
}
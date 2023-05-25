#include<bits/stdc++.h>
using namespace  std;

class Animal
{
    private:
      int age =70;
      int weight = 89;
      public:
         int number= 55;
         int kuchv;
        friend void show();    // in case of private we can acess in derived class
}; 


      class dog : public Animal
      {
        public:
         void show()
       {
        cout<<"age = "<<age<<endl<<"weight= "<<weight<<endl;
       }
      };
      



int main()
{
    dog d;
     d.show();
    
    return 0;
}
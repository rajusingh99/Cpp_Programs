#include<iostream>
using namespace std;

class test
{
    public:
      static int var;
      public: 
        static void set_data(int a)
         {
            var = a;
         }
       static  void get_data()
         {
            cout<<var;
         }
};
    int test :: var =34;
int main()
{
    test t;
   // t.set_data(67);   // calling by object
    // t.get_data();

      test::set_data(89);
      test::get_data();    // calling without object
     
//   cout<< test::var<<endl;   // if static var would public call without obj
//   t.var;                   // with obj

    return 0;
}
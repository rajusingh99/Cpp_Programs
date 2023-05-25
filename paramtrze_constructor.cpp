  # include<iostream>
  using namespace std;

   class car
   {
      public:
       int bmw;
       int bitara;
       int nexon;

       car(int a,int b, int c)
       {
        bmw=a;
        bitara=b;
        nexon=c;
       }
   };

  int main()
  {
     car c1(20, 10,40);
     cout<<"bmw is "<<c1.bmw<<endl;
     cout<<"bitara is "<<c1.bitara<<endl;
     cout<<"nexon is "<<c1.nexon<<endl;
   return 0;
  }
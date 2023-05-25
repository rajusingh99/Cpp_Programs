#include<iostream>
using namespace std;

int main()
{
     static int x=10;

      for(int i=0; i<6; i++)
      {
        cout<<x++<<" ";
      }
      x=12;
      cout<<endl;
      cout<<x<<endl;

      cout<<sizeof(x);

    return 0;
}
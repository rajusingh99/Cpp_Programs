#include<iostream>
using namespace std;
  
  void digit_column_wise(int n)
  {
      for(int i=0; i<n; i++)
      {
        int k=1;
        for(int j=0; j<n; j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
      }
  }

int main()
{
    digit_column_wise(5);

    return 0;
}
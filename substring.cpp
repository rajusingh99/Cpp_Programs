#include<iostream>
using namespace std;

int main()
{
    string input = "abc";

    int n = input.size();

   for(int i =0; i<n; i++)
   {
     for(int j =i; j<n ; j++)
      {
        for(int k =i; k<=j; k++)
        {
            cout<<input[k];
        }
        cout<<endl;
       }
   }
    return 0;
}
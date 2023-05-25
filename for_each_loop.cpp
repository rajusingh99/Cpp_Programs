#include<bits/stdc++.h>
#include<vector>
using namespace std;

 void print_even(int n)
   {
    if(n % 2 == 0)
    {
        cout<< n<< " ";
    }
   }

int main()
{
   int  arr []  = { 3,5,6,7,8,9,0,54};

   for_each(arr, arr + 8, print_even);
 
    return 0;
}
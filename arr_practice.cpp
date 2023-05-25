#include<iostream>
using namespace std;

int main()
{
    int arr [] = {2,1,15,20,25};
    int i, j, k;

    i = ++arr[1];
   // cout<<i<<" ";
    j =  arr[1]++;
   // cout<<j<<" " ;

   k = arr[i++];

   cout<<i<<" "<<j<<" "<<k<<endl;

   int a[10]= {1,2,3,4,5,6,7,8};

   int p= (a+1)[0];
   cout<<"p= "<<p;
    return 0;
}
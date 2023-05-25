#include<iostream>
#define ull unsigned long long
using namespace std;

ull  fact(int n)
{
    // base case
    if(n==1)
    {
        return 1;
    }
    ull  ans= n * fact(n-1) ;
    return ans;
   // cout<<"factorial is : "<<fact<<endl;
}

int main()
{
   cout<<fact(20);
    return 0;
}
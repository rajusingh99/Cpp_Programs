#include<bits/stdc++.h>
using namespace std;
 
 bool check_prime(int n)
 {
    if(n<=1)
    {
        return false;
    }
    for(int i =2; i<sqrt(n); i++)
    {
        if(n % i ==0)
        {
            return false;
        }
        return true;
    }
 }

int main()
{
   if(check_prime(17) == 1)
   {
     cout<<"true";
   }
    return 0;
}
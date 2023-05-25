#include<iostream>
using namespace std;


int main()
{      
  // pass by reference 
  int a = 5;
  int &b = a; // a & b are pointing to same variable
               // if make changes any of them then reflect both of them
  a++;
  cout<<"b= "<<b<<endl;
  cout<<"a= "<<a<<endl;

    return 0;
}

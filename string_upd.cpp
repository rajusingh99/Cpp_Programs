int x =90;      // global variable
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "This is string";
    cout<<str<<endl;     // printing string
   int n = str.length();   // length of string
   cout<<n<<endl;

   int m = str.size();     // length of string
   cout<<"m= "<<m<<endl;    // printing

   str[3] =97;            // updating value at string
   cout<<str<<endl;
   
   // finding front element of string
   cout<<"front element of string="<<str.front()<<endl;;
   cout<<"global variable x= "<<x<<endl;     // print global variable

   // finding last element of string

   cout<<"back element of string= "<<str.back();
    return 0;
}
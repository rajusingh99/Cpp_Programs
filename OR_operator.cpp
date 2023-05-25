#include<iostream>
using namespace std;

int main()
{
    int a= 6;   // 0110
    int b= 5 ;  // 0101 
      //return     0111 
      int c= (a | b);      // if 1 occurs either  in binary form of a &b. it adds respective value
    
    cout<<" a | b= "<<c<<endl;    //0111  

    return 0;
}
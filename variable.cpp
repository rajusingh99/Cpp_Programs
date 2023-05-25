#include<iostream>
using namespace std;

   int global_var=90;         // global variable declared

 void swap(int a, int b)
 {  
    cout<<a<<" "<<b<<" "<<endl;
    a= a * b;                  // locally variable assigned
    b= a / b;
    a= a / b;
    cout<<a<<" "<<b<<" ";
 }
 

int main()
{    
   swap(5,8);
   cout<<endl<<global_var;
    return 0;
}
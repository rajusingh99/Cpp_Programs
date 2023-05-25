#include<iostream>
using namespace std;

int main()
{
//     int age = 14;

//     try
//     {
//       if(age>= 18)
//       {
//         cout<<"you are eligible to vote";
//       }
//       else
//       {
//         throw "Error found";
//       }
//     }
   
//    catch( ...)
//    {
//     cout<<"sorry you are not eligible to vote "<<endl;
//     cout<<"your age is "<<age <<endl;
//    }


int age = 14;

    try
    {
      if(age>= 18)
      {
        cout<<"you are eligible to vote";
      }
      else
      {
        throw (age);
      }
    }
   
   catch(int age)
   {
    cout<<"sorry you are not eligible to vote "<<endl;
    cout<<"your age is "<<age <<endl;
   }


   cout<<"exit;";
    return 0;
}
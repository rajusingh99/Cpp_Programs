#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string f = "first ";
    string s = "second";

    string final = f + s;   // string concatination  with '+' sign

    cout<<"concatinated with '+' operator ="<<"both string is : "<<final<<endl;


    char ch1[90] = "Raju ";
   
    char ch2[89] = "singh";
    strcat(ch1 , ch2);      // concatination with strcat() function
    cout<<"concatinated with strcat()="<<ch1<<endl;;               // printing final string 


   f.append(s);       // concationation second string into first string 
   cout<<"concatination with f.append(s) = "<<f<<endl;    // printing concatinating strings
  
    return 0;
}
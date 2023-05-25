#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // first method
    /*
      char c[50] ;
      cin.get(c, 50);  // taking user input of char type  
      cout<<c;
     */
    

   // second method
   
   /*
      string str;
      getline(cin,str);    // taking input of string type
      int n = str.size();
      cout<<n<<endl;
      cout<<str<<endl;;
      cout<<str.front()<<endl;
      cout<<str.back()<<endl;
     */

  // string concatination three ways of string type
      // 1. '+'
      // 2. 'strcat(c,d)'
      // 3.  'append()'  ex: str1.append(str2)

   /*
    char c[29] = "hello ";
    char d[20] = "Ranjana";
     strcat(c,d);    // concatination of char type string
    cout<<c<<endl; 

    string str1 = "MY name is ";
    string str2 = "Raju Singh";
    string ans = (str1+str2);  // concatinating of string 1st method
    str1.append(str2);         // concatinating of string 2nd method
    cout<<ans<<endl;
    cout<<str1;
   */
   string str  = "Coding Ninja!";
   for(int i =0; i<str.size(); i++)
   {
    cout<<str[i];
   }
   cout<<endl;

   sort(str.begin(),str.end());
   for(int i =0; i<str.size(); i++)
   {
    cout<<str[i];
   }
    cout<<endl; 

   reverse(str.begin(),str.end());
   for(int i =0; i<str.size(); i++)
   {
    cout<<str[i];
   }
   cout<<endl;
   

    return 0;
}
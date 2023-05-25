#include<iostream>
using namespace std;

int main()
{
      string str;
      cout<<"enter string"<<endl;
      getline(cin , str);
      int flag =0;
      int low =0; 
      int high = str.size()-1;
     

      while(low<high)
      {
        if(str[low] != str[high])
        {
            flag =1;
            break;
        }
          low++;
          high--;
      }
    
      if(flag == 0)
      {
        cout<<"string is plindrame"<<endl;
      }
      else 
      {
        cout<<"string is not palindrome"<<endl;
      }

    return 0;
}
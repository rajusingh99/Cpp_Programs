#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
     int n ;
     cout<<"Enter the no ="<<endl;
     cin>>n;

     vector<int> ans;
       
       while(n >0)
       {
          int rem = n % 2;
          ans.push_back(rem);
          n = n / 2;    

       }
      reverse(ans.begin(), ans.end());
     int  size =ans.size();

     for(int i =0; i<size; i++) 
     {
        cout<<ans[i];
     }
   
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

 vector<int> rotate_array(vector<int> arr , int n, int k)
  {
      vector <int> ans;
      for(int i =k; i<n ; i++)
      {
        ans.push_back(arr[i]);
      }
      for(int i =0; i<k; i++)
      {
        ans.push_back(arr[i]);
      }
      for(int i=0; i<ans.size(); i++)
      {
        cout<<ans[i]<<" ";
      }
  }

int main()
{
      vector<int> arr { 1,2,3,4,5,6,7,8,89};
      int n = arr.size();
      rotate_array(arr,n, 3 );
    return 0;
}
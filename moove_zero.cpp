#include<bits/stdc++.h>
using namespace std;

    void moveZeroes(vector<int>& nums) {
      int n = nums.size();

      vector<int> ans;
        for(int i =0;i<n; i++)
        {
           if(nums[i]!= 0)
           {
               ans.push_back(nums[i]);
           }
        }
        for(int i =0;i<n; i++)
        {
           if(nums[i]== 0)
           {
               ans.push_back(nums[i]);
           }
        }
       int m =ans.size();
       for(int i=0; i<m; i++)
       {
            cout<<ans[i]<<" ";
       }
     //  return nums;
    }

int main()
{
    vector<int> arr= {0,1,0,8,0,3,12} ;
     moveZeroes(arr);

    return 0;
}
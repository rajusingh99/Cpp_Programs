#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

    int remove_element(vector<int> arr, int val)
    {
       vector<int> ans;
       for(int i=0; i<arr.size(); i++)
       {
        if(arr[i]!=val)
        {
            ans.push_back(arr[i]);
        }
       }

       sort(ans.begin(), ans.end());

          for(int i=0 ; i<ans.size(); i++)
          {
            cout<< ans[i]<<" ";
          }
          cout<<endl;
    }

int main()
{
     vector<int> arr={2,3,4,5,6,7,7,5,2};
     int val=7;
      cout<<"we removed 7:" <<" ";
      remove_element(arr, val);
        cout<<"we removed 2:" <<" ";
      remove_element(arr, 2);


    return 0;
}
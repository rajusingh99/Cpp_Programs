#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
      unordered_map<int, int> m;
      vector<int> arr = {6,2,0,4,2,9,1,5,9};
      int n= arr.size();

      for(int i =0; i<n; i++)
      {
        m[arr[i]]++;
      }
     int maxi =-2;
     for(auto it : m)
     {
       // cout<<it.first <<" "<<it.second<<endl;

       if(maxi<it.first)
       {
        maxi = it.first;
       }
     }
     cout<<maxi;

    

    return 0;
}
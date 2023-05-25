#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

void find_max_freq_no(vector<int> &arr, int n)
{
    map<int,int> m;

    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }

   // int maxi = INT_MIN;
    int ans =1;

    for(auto i :m)
    {
      
        cout<<i.first<< " "<<i.second<<endl;
    }
}

int main()
{
    
   vector<int> arr= {1,2,3,4,5,6,1,1,2,3,3};
   int n = arr.size();
   find_max_freq_no(arr,n);
    return 0;
}
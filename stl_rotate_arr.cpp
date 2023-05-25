#include<bits/stdc++.h>
using namespace std;

// using STL function
void rotate_array_element(int n, int k)
{
    int arr[n];
    cout<<"Enter elements: ";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    rotate(arr, arr+ k, arr+n);
    int m = sizeof(arr)/sizeof(int);
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Using brute force
void rotate_array(vector<int>arr,int k)
{
    vector<int> ans;
    for(int i=k; i<arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i=0; i<k; i++)
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
   // rotate_array_element(7,4);
     
     vector<int> arr= {1,2,3,4,5,6,7};
    rotate_array(arr,3);
     
      return 0 ;
}
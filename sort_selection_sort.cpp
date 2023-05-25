#include<bits/stdc++.h>
using namespace std;

  
  void selection_sort(int arr[], int n)
  {
    for(int i =0; i<n-1; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);     
            }
        }
    } 
  }

int main()
{
    int arr[] = {2,3,7,0,1};
    int n = sizeof(arr)/sizeof(int);
 
    selection_sort(arr,n);
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
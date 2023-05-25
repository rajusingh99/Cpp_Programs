#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {90,67,89,34,89,13,14,345};
    int n = sizeof(arr)/sizeof(arr[0]);

   //reverse(arr, arr+n);             // sorting in descending order
   sort(arr, arr+n, greater<int> ());  // sorting in descending
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
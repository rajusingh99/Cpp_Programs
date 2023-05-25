#include<bits/stdc++.h>
using namespace std;

   void bubble_sort(int arr[], int n)
   {
    for(int i =0; i<n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
   }

int main()
{
    int arr[] = {3,0,8,5,1,200,6};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);
    for(int i =0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}
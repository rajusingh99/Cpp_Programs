#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5]= {90,90,677,45,9};
    int n= sizeof(arr)/sizeof(int);

    sort(arr,arr+n);    // sorting in assending order
    reverse(arr, arr+n);

     cout<<"By stl function in sort and reverse :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    cout<<endl<<"bruteforce in assending order :"<<endl;
// brute force
   
    for(int i=0; i<n-1; i++)
    {
       for(int j= i+1; j<n; j++)
       {
        if(arr[i]> arr[j])    // we can use != instead of > sign
        {
            swap(arr[i],arr[j]);
        }
       }
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
   cout<<endl<<"STL in descending order :"<<endl;
   vector<int> arr1=  {1,2,3,9,0,3,5,8,65};
   sort(arr1.rbegin(),arr1.rend());   // sorting in descending order

   for(int i=0; i<arr1.size();i++)
   {
    cout<<arr1[i]<<" ";
   }


    return 0;
}
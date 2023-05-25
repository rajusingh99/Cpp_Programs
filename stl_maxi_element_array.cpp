#include<bits/stdc++.h>
using namespace std;

int main()
{

    // brute force
   int maxi = 0;
    int arr[]= {10,23,9099,9098,4,5,0};
     
     int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        if(maxi<arr[i])
        {
            maxi = arr[i];
        }
    }
    cout<<"By brute force: ";
    cout<<maxi<<endl;

  // By stl function
    
    int maximum = *max_element(arr, arr+n);
    cout<<"By stl maximum = "<<maximum<<endl;

    int minimum = *min_element(arr,arr+n);
    cout<<"Minimum= "<<minimum<<endl;

    return 0;
}
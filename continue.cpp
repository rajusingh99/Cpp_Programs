#include<iostream>
using namespace std;

int main()
{

    int arr[]= {3,5,6,7,-3,9,0,1};

    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        if(arr[i] <0)
        {
             //cout<<arr[i]<<" ";
             continue;
            //cout<<arr[i]<<" ";
        }
         cout<<arr[i]<<" ";
    }
    return 0 ;
}
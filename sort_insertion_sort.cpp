#include<bits/stdc++.h>
using namespace std;

    void insertion_sort(int arr[], int n)
    {
        for(int i =0; i<n; i++)
        {
            int current = arr[i];
            int j ;
           for( j= i-1; j>=0 && arr[j] > current; j--)
            {
                arr[j+1] = arr[j];
            }
            arr[j+1] = current;
        }
    }

int main()
{
    int arr[] = {1,0,8,3,8,1,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    insertion_sort(arr,n);
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
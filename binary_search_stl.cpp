#include<bits/stdc++.h>
using namespace std;

int main()
{
     int arr[] = {1,3,7,0,3,4,8,9,7};
     int n = sizeof(arr)/ sizeof(arr[0]);
     cout<<" size= "<<n<<endl;
     
     sort(arr, arr + n);
     cout<<find(arr, arr + n, 0)<<endl;
     cout<<"binary search= "<<binary_search(arr, arr + n , 0);
    return 0;
}
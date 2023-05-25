# include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
  int n ;
  cin>>n;
  
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>> arr[i];
  }
  
  int m = sizeof(arr)/ sizeof(int);
  sort(arr, arr+m);
  reverse(arr, arr+m);
  cout<<arr[1];
  
    return 0;
}

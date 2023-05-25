# include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
    int n,k ;
    cout<<"Enter n: ";
    cin>>n;
   
    cout<<"Enter k: ";
    cin>>k;
   
  int arr[n];
  cout<<"Enter the elements of array: ";
  for(int i =0; i<n; i++)
  {
     cin>>arr[i];
     
  }
  
  int sum =0;
  for(int i =0; i<n-1; i++)
  {
    for(int j= i+1; j<n; j++)
    {
      if( (arr[i] + arr[j])%k == 0 )
      {
        sum++;
      }
    }
  }
  
  cout<<sum;
    
  
    return 0;
}
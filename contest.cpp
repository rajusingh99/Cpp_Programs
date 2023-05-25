#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin>>n>>k;
  
   int sum =0;
  vector<int> arr;
  for(int i =0; i<n; i++)
  {
    cin>>arr[i];
  }
  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());
  
  for(int j =0; j<arr.size(); j++)
  {
    if(arr[j] >0 && arr[j]>= arr[k-1])
    {
      sum++;
    }
    
  }
  cout<<sum;
  return 0;
}

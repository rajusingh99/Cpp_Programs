#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main() {
    // your code here

   int n;
  cin>>n;
  
  long fibnac = fib(n);
  int count =0;
  vector<int> arr;
  while(count< 2)
  {
      arr.push_back(fibnac%10);
      count++; 
  }
  //cout<<count;
  reverse(arr.begin(),arr.end());
  int ans = arr[0] + (arr[1] *10);
  cout<<ans;
  
  
    return 0;
  
}
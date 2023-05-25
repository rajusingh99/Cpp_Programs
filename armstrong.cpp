# include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
  int n;
  cout<<"Enter number: ";

  cin>>n;
  int b = n;
 
 vector<int> arr;
  //int sum =0;
  while(n!=0)
  {
   int rem = n%10;
   arr.push_back(rem);
    n= n/10;
  }

  long long sum = 0 ;
  int s = arr.size();
  for(int i =0; i<arr.size(); i++)
  {
      sum+= pow(arr[i],s);   
  }


  if(sum == b)
  {
    cout<<1;
  }
  else
  {
    cout<<0;
  }
  
    return 0;
}
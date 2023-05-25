# include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
   int n;
  cin>>n;
  
  vector<int> arr;
  
  while(n != 0)
  {
    arr.push_back(n%10);
    n = n/10;
  }
  reverse(arr.begin(), arr.end());

  int flag = 0;
  int i =0; 
  int j = arr.size()-1;
  while(i<j)
  {
    if(arr[i] != arr[j])
    {
      flag = 1;
      break;
    }
      i++;
      j--;
  }

  if(flag == 1)
  {
    cout<<"false";
  }
  else
  {
    cout<<"true";
  }
  
    return 0;
}
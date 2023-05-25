#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
    int n;
   cin>>n;
   int arr[n];
  
  for(int i =0; i<n; i++)
  {
    cin>>arr[i];
  }
  
  int pos =0, neg =0, zero=0;
  for(int i =0; i<n; i++)
  {
    if(arr[i]>0)
    {
      pos++;
    }
    else if(arr[i]<0)
    {
      neg--;
    }
    else
    {
      zero++;
    }
    
  }
  neg = (-1)*neg;

   int total = n;
   float ratpos ;
   ratpos= pos/n;
   double rat_neg = neg/n;
   double rat_zero = zero/n;
  cout<<ratpos<<endl;
  cout<<rat_neg<<endl;
  cout<<rat_zero<<endl;

//   cout<<fixed<<setprecision(6)<<rat_pos<<endl;
//   cout<<fixed<<setprecision(6)<<rat_neg<<endl;
//   cout<<fixed<<setprecision(6)<<rat_zero<<endl;
  
    return 0;
}

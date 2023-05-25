#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
   int n1,n2,sum ;
    n1 =0;
    n2 =1;
    vector<int> v;
  // cout<<n1<<" "<<n2<<" ";
  v.push_back(n1);
  v.push_back(n2);
    for(int i =2; i<n; i++)
    {
       sum = n1 + n2;
      // cout<<sum<<" ";
       v.push_back(sum);
       n1 = n2;
       n2 = sum;
    }
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
  
    return 0;
}
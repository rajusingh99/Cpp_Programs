#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr {1,2,3,4,5,6,7,8};
    vector<int> temp;

    for(int i= 0; i<arr.size(); i++)
    {
        temp.push_back(arr[i]);
    }

 
  // delete [] temp;
   for(int i=0; i<temp.size(); i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}
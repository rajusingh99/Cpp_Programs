#include<bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> arr = {23,90,3,9,89};
   //  sort(arr.begin(),arr.end());
    int n = arr.size();
    auto low_bond= lower_bound(arr.begin(), arr.end(), 22 );
    cout<< " lower ="<<low_bond-arr.begin();
    return 0;
}
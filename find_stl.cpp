#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3,4,6,12,6,1,5,1,5,1};
    vector<int> :: iterator it;

    it = find(arr.begin(), arr.end(),1);

    if(it!=arr.end())
    {
        cout<<it-arr.begin();
    }
    else 
    {
        cout<<"not found";
    }

    return 0;
}
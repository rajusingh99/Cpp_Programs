#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> arr= {6,3,1,5,78,0,1,1};

    int count_is = count(arr , arr + 8, 1);
    cout<<count_is<<" ";

   
    
    return 0;
}
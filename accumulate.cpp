#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum =0;
    int arr[5] = {7,5,2,1,4};
     int accum = accumulate(arr, arr+5 , sum);
     cout<<accum;
    return 0;
}

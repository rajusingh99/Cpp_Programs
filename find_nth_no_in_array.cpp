#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

// int find_nth_no(vector<int> arr , int k)
// {
//     vector<int> ans;
//    int n = arr.size();
   

//     for(int i=0; i<n; i++)
//     {
//         if( (arr[i]>=100)  && (arr[i]<=999))
//         {
//             ans.push_back(arr[i]);
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans[k-1];

// }


int find_nth_Number_in_three_digit(int n, int k)
{
    int arr[n];
    vector<int>ans;
    
    cout<<"enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if((arr[i]>=100) && (arr[i]<=999))
        {
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans[k-1];
}

int main()
{   
    // vector<int> arr= {12,34,156,890,192,12,54,23};
    // cout<<find_nth_no(arr,2);      // first function calling

         // second function calling
     cout<<find_nth_Number_in_three_digit( 5, 2);


    return 0;

}
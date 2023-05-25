#include<bits/stdc++.h>
using namespace std;

int main()
{
     int arr [9]  = {-7,3,4,5,6,7,3,2,1000};

     int max = *max_element(arr,arr +9);
     cout<<max; 
    
    int min = *min_element(arr,arr +9);
     cout<<" "<<min;
    return 0;
}
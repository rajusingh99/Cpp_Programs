#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {7,6,3,4,56,9,0};
    int maximum = *max_element(arr, arr + 7);
    int minimum = *min_element(arr, arr +7);
    cout<<"maximum = "<<maximum<<endl;
    cout<<"minimum = "<<minimum;
    return 0;
}
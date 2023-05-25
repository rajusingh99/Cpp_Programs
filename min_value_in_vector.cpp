#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   
    vector<int> ans = {1,2,3,5,6,8,20};

    int min = *min_element(ans.begin(), ans.end());
    cout<<"min = "<<min;

    return 0;
}
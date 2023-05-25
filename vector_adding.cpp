// CPP program to sum two numbers represented two
// arrays.
#include <bits/stdc++.h>
using namespace std;

vector<int> calSum(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    // your code here
	long long sum1 =0;
	long long sum2 =0;
	reverse(arr1.begin(),arr1.end());
	reverse(arr2.begin(),arr2.end());
	for(int i =0; i<arr1.size(); i++ )
		{
			 sum1 = sum1 + arr1[i]* pow(10,i);
		}
	for(int j =0; j<arr2.size(); j++)
		{
			sum2 = sum2 + arr2[j] * pow(10,j);
		}
	long long sum =0;
	sum = sum1 + sum2;
	vector<int> ans;
	while(sum!=0)
		{
			ans.push_back(sum%10);
			sum = sum/10;
		}
	reverse(ans.begin(),ans.end());
	return ans;
	
}

// Driven Program
int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    vector<int> res = calSum(arr1, arr2, n1, n2);

    for (auto i : res)
        cout << i << endl;

    return 0;
}
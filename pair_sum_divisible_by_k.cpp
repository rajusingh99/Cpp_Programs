#include <bits/stdc++.h>
using namespace std;

int countPairSumK(vector<int> &arr){
    // Your Code Here
	int n, k;
	cin>>n;
	cin>>k;
	//cout<<endl;

	for(int i =0; i<arr.size(); i++)
		{
			//cin>>arr[i];
		}
int count =0;
	for(int i=0; i<arr.size()-1; i++)
		{
			for(int j = i+1; j<arr.size(); j++)
				{
					if(arr[i] + arr[j] % k==0)
					{
						count++;
					}
				}
		}
	return count;
}

int main() {
	
	vector<int> arr = {1,2,3,4,5};
    cout<<countPairSumK(arr);
}
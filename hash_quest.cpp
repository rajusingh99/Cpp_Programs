#include<bits/stdc++.h>
using namespace std;

     void majorityElement(long long int nums[],long long int N)
       {
		// Write your code here and print output
		
		   unordered_map<int, int> m;
		   for(int i =0; i<N; i++)
			   {
				   m[nums[i]]++;
			   }
		   int k= m.size();
		   int freq =0;
		   for(auto i : m)
			   {
				if(freq<i.second)
				{
					freq = i.second;
				}
			   }
		   cout<<freq;
   }


int main ()
	{
	    long long int n;
	    cin>>n;
	    long long int A[n];
	    for(long long int i=0;i<n;i++)cin>>A[i];
		
	    majorityElement(A,n);
	    	
		
	}





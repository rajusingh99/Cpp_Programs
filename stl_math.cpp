#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sums =0;
   int arr[8] = {1,2,3,3,5,7,8,9};
   
   int ans= accumulate(arr, arr+8,sums);
   cout<<"sum is = "<<ans<<endl;
  
   int counts = count(arr, arr+8,3);
   cout<<"count of 3 = "<<counts<<endl;

   //  important stl in maths
   double x= 6/4;
   cout<<ceil(x)<<endl;  // Returns the smallest integer that is greater than or equal to x 

   cout<<round(12.500119)<<endl;   // 
   

   cout<<floor(12.999800)<<endl;   // gives x till x.9999999

   int y = 90;
   cout<<sin(90)<<endl;
   cout<<cos(90)<<endl;
   cout<<tan(90)<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

unsigned int ones_complement(unsigned int n)
{
    vector<int> binary;
    //int ans = 0;
    while(n!=0)
    {
        int temp= n % 2;
        binary.push_back(temp);
        n= n/2;
    }
    reverse(binary.begin(), binary.end());
    
   for(int i=0 ; i<binary.size() ; i++)
   {
    cout<< binary[i]<<" ";
   }
}

//     for(int i=0; i<binary.size(); i++)
//     {
//          if(binary[i]==0)
//          {
//             binary[i]= 1;
//          }
//          else
//          {
//              binary[i] = 0;
//          }
//     }

//     int temp = 1;

//     for(int i= binary.size()- 1; i>=0; i-- )
//     {
//         n = n + binary[i] * temp;
//         temp = temp * 2;
//     }
//     cout<<n;
// }

int main()
{
   ones_complement(10);

    return 0;
}
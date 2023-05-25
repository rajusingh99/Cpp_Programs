#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int arr[7] = {2, 4, 6, -1 , -4, -7, -5};
     int n= sizeof(arr)/sizeof(arr[0]);
    // cout<<"size of arr = "<<n<<endl;

    // int m= sizeof(arr[]);
    // cout<<"sizeof(arr[0])="<<m<<endl;
    // int p = sizeof(arr);
    // cout<<"sizeof(arr)="<<p<<endl;


      int x= *(&arr +1) -arr;
      cout<<"*(&arr + 1)= "<<*(&arr + 1)<<endl;
      cout<<"arr= "<<arr<<endl;
      cout<<"size= "<<n<<endl;


    for(int i=0; i< n ; i++)
    {
       // cout<<arr[i]<<" ";
        if(arr[i]==-1)
        {
            break;
        }
    }

    return 0;
}
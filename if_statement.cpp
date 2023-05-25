#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x= 90;
   
    // if(a<10)
    
    //     cout<<a<<endl;
    //    else 
    //    cout<<"a is greater"<<endl;

     int arr[]= {7, 8, 9 , 0, 3, 9, 8,2,1};
     int n= sizeof(arr)/ sizeof(arr[0]);

      for(int i=0; i<n ; i++)
      {
          if(arr[i]==8)
          {
         //   cout<<arr[i]<<" ";
          }
          if(arr[i]==9)
          {
         //   cout<<arr[i]<<" ";
          }
      }

      sort(arr, arr+n);

      for(int i=0; i<n ; i++)
      {
          {
            cout<<arr[i]<<" ";
          }
      }

    // int a= 10;
    // cout<<"before a= "<<a<<endl;
    // a= 15;
    // cout<<"after a="<<a<<endl;

    // static int c= 70;
    // cout<<"before c= "<<c<<endl;
    // c= 80;
    // cout<<"after c="<<c<<endl;
    
    return 0;
}
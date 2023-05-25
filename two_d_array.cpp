#include<iostream>
using namespace std;

int main()
{
    int arr[3][2] = { {0,1},{2,3},{4,5} };
    
    int arr1[] = {12,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    
     for(int i =0; i<3; i++)
     {
        for(int j=0; j<2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
     }

    return 0;

}
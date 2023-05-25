#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
     vector<string> arr;

     arr.push_back("Raju");
     arr.push_back("kumar");
     arr.push_back("sumit");
     arr.push_back("raj");
     arr.push_back("Abhishek");
     arr.push_back("singh");
     arr.push_back("BTech");
     arr.push_back("IT");
     arr.push_back("CSE");
     
     int n = arr.size();
     cout<<"n = "<<n<<endl;
   
     for(int i =0; i<n; i++)
     {
        cout<<arr[i]<<" ";
     }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,35,7,8,9,90};
    
    v.pop_back();
    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(2)<<endl;

    cout<<"capacity = "<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;

   v.clear();
   for(int i=0; i<v.size(); i++)
   {
    cout<<v[i]<<" ";
   }  

    return 0;
}
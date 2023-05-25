#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8};

    cout<<"before: "<<endl;
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"after erasing "<<endl;
    v.erase(v.begin()+4, v.begin()+6);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
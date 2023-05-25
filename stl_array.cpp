#include<iostream>
#include<array>
using namespace std;

int main()
{  
     array<int,10>a = {1,2,39,45,6};
     cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    
     cout<<a.at(2)<<endl;
     a.at(2) = 90;
     cout<<a.at(2)<<endl;
     a.at(6) =  98;
     cout<<a.at(6)<<endl;
     cout<<a.at(7)<<endl;

     cout<<a[1];

    return 0;
}
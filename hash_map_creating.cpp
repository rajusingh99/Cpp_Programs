#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creating map
   unordered_map <string,int> m;
    
    // inserting 1st way
    m["Name"] = 1;
    m["Raju"] = 2;
    m["singh"] = 3;
    
 // inserting 2nd way 
   pair<string,int> p ("love",10);
   m.insert(p);
  
  // searching 1st way
    cout<<m["Name"]<<endl;
    cout<<m["Raju"]<<endl;
    cout<<m["singh"]<<endl;
    cout<< m["love"]<<endl;
   
    // 2nd way of searching
     cout<<m.at("love")<<endl;
     cout<<m["Love"]<<endl;  // inserting entry at 0 

     // size of map m

     cout<<"size of map m = "<<m.size()<<endl;

     // to check presence
    cout<< m.count("Raju")<<endl;

    // erase function
    m.erase("love");
    cout<<"size after erasing Love= " << m.size()<<endl;


    for( auto i: m)
    {
        cout<<i.first <<" "<<i.second<<endl;
    }


    return 0;
}

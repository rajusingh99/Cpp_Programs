#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    // char s1[90] = "raju";
    // char s2[90] = "singh";

    // int comp1 = strcmp(s1, s2);    //  -ve result  
    // int comp2 = strcmp(s2, s1);     // +ve result
    // cout<<"comp1 = "<<comp1<<endl;
    // cout<<"comp2 = "<<comp2<<endl;

     string str1 = "Ramesh";   
     string str2 = "Ramesh!";
     int res =str1.compare(str2);   // +ve
     cout<<res<<endl;
     cout<<str2.compare(str1)<<endl;   // -ve

     int a= str1 <str2;
     int b =str1.size();
     cout<<"smaller || greater "<<a;
    return 0;
}
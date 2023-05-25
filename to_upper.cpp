#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Raju singh";
    int n= str.length();

    for(int i= 0; i<n; i++)
    {
        putchar(tolower(str[i]));

    } 
    cout<<endl;
    
    for(int i= 0; i<n; i++)
    {
        putchar(toupper(str[i]));

    } 
    
     
    
     return 0;

}
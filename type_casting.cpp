#include<iostream>
using namespace std;

int main()
{
    int x = 65;
    int *ptr = & x;
    char *ptrr = (char*) ptr;
    cout<<"*ptrr= "<<*ptrr<<endl;
    
    char * ptr1 = ptrr;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"*ptr1 = "<<*ptr1<<endl;

    return 0;
}
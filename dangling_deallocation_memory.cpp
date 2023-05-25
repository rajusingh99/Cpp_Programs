#include<iostream>
using namespace std;

int main()
{
    // dynamin memory allocation
    int *ptr = (int *) malloc(sizeof(int));
    cout<<"*ptr= "<<*ptr<<endl;

    free(ptr);
    ptr = NULL;
    cout<<*ptr;


    return 0;
}
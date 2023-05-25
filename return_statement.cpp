#include<iostream>
using namespace std;

class A
{
    int result;
public:
int sum(int a, int b)
{
    result= a + b;
    return result; 
}
void print()
{
    cout<<"sum is "<<result<<endl;
}
};

int main()
{
   A a;
   a.sum(5,8);
   a.print();
       return 0;
}
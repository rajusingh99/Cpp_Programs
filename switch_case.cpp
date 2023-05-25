#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2 ;
    int result;
    char oper ;

    cout<<"Enter the 1st number: "<<endl;
    cin>>num1;

    cout<<"Enter the 2nd Number: "<<endl;
    cin>>num2;

    cout<<"Enter operator: "<<endl;
    cin>>oper;

    switch(oper)
    {
        case  '+':
           result = num1 + num2;
           cout<<"sum of numbers "<<result<<endl;
           break;
        case '-':
           result = num1 - num2;
           cout<<"subtraction is "<<result<<endl;
           break;
        case '*':
           result = num1 * num2;
           cout<<"multiplication of numbers "<<result<<endl;
           break;
        case '/':
            result = num1 / num2;
            cout<<"division of numbers "<<result<<endl;
            break;
        case '%':
             result = num1 % num2;
             cout<<"Remainder of numbers is "<<result;
             break;
        default:
            cout<<"Invalid operation enterd"<<endl;
            break;            
    } 
    return 0;
}
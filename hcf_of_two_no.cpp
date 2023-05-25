#include<iostream>
using namespace std;

int main()
{
    int div, divs;

    cout<<"Enter div"<<endl;
    cin>>div;
    cout<<"Enter divs"<<endl;
    cin>>divs;
 
    while(div != divs)
    {
        if(div > divs)
        {
            div = div - divs;
        }
        else{
            divs = divs - div;
        }
    }
    cout<<"hcf of two no is="<<div;
   


    return 0;
}
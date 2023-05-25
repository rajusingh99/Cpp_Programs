// C++ program to demonstrate syntax of switch
#include <iostream>
using namespace std;

// Driver Code
int main()
{  
	int day;
    cout<<"Enter day =";
    cin>>day;

    switch(day)
    {
        case 1:
           cout<<"Monday";
           break;
        case 2:
           cout<<"tuesday";
           break;
        case 3:
           cout<<"Wednesday";
           break;
        case 4:
           cout<<"Thrusday";
           break;
        case 5:
           cout<<"Friday";
           break;
        case 6:
           cout<<"saturday";
           break;
        case 8:
           cout<<"Sunday";
           break;                  
        default:
            cout<<"Invalid day entered";   
            break;
    }

	return 0;
}

// CPP program to illustrate
// std::find
// CPP program to illustrate
// std::find
#include<bits/stdc++.h>
using namespace std;

int main ()
{
	vector<int> vec { 10, 20, 30, 40 };

	// Iterator used to store the position
	// of searched element
	vector<int>::iterator it;

	// // Print Original Vector
	//  cout << "Original vector :";
	// for (int i=0; i<vec.size(); i++)
	// 	cout << " " << vec[i];

	cout << "\n";

	// Element to be searched
	int ser = 30;

	// std::find function call
	it = find (vec.begin(), vec.end(), ser);
	if (it != vec.end())
	{
		//cout << "Element " << ser <<" found at position : " ;
		cout << it - vec.begin() << " (counting from zero) \n" ;
	}
	else
		cout << "Element not found.\n\n";

	return 0;
}

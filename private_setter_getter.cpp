// C++ program to demonstrate private
// access modifier

#include<iostream>
using namespace std;

class Circle
{
	// private data member
	private:
		double radius = 90;
	
	// public member function
	public:
	  void dis()
	  {
		cout<<"radius = "<<radius<<endl;
	  }
		void compute_area(double r)
		{   // member function can access private
			// data member radius
			radius = r;
			
			double area = 3.14*radius*radius;
			
			cout << "Radius is: " << radius << endl;
			cout << "Area is: " << area<<endl;
		}
	
};

// main function
int main()
{
	// creating object of the class
	Circle obj;
	
	// trying to access private data member
	// directly outside the class
    obj.dis();
	obj.compute_area(1.5);
	
	
	
	return 0;
}

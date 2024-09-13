#include <iostream>
using namespace std;
int main()
{
	
	float rad;
	const float PI=3.14159;
	
	cout<< "Enter the radius of circle : ";
	cin>> rad;
	
	float area = PI * rad * rad;
	cout<< endl << "Area of Circle = " << area;
	
	return 0;
	}

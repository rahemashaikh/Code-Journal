#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	double area;
	float  b, a;
	
	cout << " 'Calculating the area Of isosceles Tringle' ";
	
	cout<<endl<<endl << "Enter the Value of Base (do not give zero or any negative number) : ";
	cin>> b;
	cout <<endl<< endl << "Enter the Value of Both Equal sides (do not give zero or any negative number) : ";
	cin>> a;
	 
	area= 0.5*b*(sqrt((pow(a,2))-(pow(b,2))/4));
	cout << endl<< "The Area of Iscosceles Tringle is : " << area;
	
	
}

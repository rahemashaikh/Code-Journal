


#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double area ,circum;
	float  rad;
	
	cout << " 'Calculating the Area And Circumference Of Circle' " <<endl <<endl;
	 
	 cout<< " Enter the value of Radius : ";
	 cin>> rad;
	 
	 area = M_PI*pow(rad,2);
	 cout<<endl<<endl<< " The Area of Circle is : " <<  area;
	 
	 circum = 2*M_PI*rad;
	  cout<<endl<<endl<< " The Circumference of Circle is : " <<  circum;
	 
	 return 0;
}

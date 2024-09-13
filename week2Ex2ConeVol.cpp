#include <iostream>
using namespace std;
int main()
{
	float vol;
	float rad;
	float height;
	const float PI= 3.1415926535;
	
	cout<< " Program to calculate the Volume of a Cone "<< endl <<endl <<endl;
	cout<<" Enter The value of Radius : " ;
	cin>>rad;
	cout<<" Enter The value of Height : ";
	cin>>height;
	
	vol =  PI* (rad*rad) * height / 3;
	
	cout<<" The Volume Of Cone Is : "<< vol <<endl <<endl;
	return 0;


}

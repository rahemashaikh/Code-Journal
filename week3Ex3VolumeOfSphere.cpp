#include<iostream>
using namespace std;
int main()
{
	double vol;
	int rad;
	 #define  PI  3.14
	
	cout<<" \"Program for calculating Volume of sphere\"  ";
	cout<<endl<< endl<< " Input the radius of sphere : ";
	cin>>rad;
	vol=  (rad*rad*rad)*PI*4/3 ;
	cout<<" The Volume of sphere  is : "<< vol;
	return 0;
	
}

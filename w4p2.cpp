#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num , power;
	double ans;
	
	cout<< "Enter a number : ";
	cin>> num;
	cout<<endl<< "Enter A Power : ";
	cin >> power;
	ans= pow(num,power);
	cout<< num << "^" << power << " = " << ans;
	return 0; 
}

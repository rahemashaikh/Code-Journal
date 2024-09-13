#include<iostream>
using namespace std;
int main()
{
	long long a,c=1;
	char sign =33;
	cout<<" Enter a number  for factorial : " ; cin>>a;
	cout<<endl<<a<<sign<<" = ";
	for(a;a>=1;a--)
	{
		
		cout<< a << " x " ;
		c=c*a;
	}
	cout<< "\b\b"<< " = " << c;
}

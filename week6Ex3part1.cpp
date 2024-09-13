#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char alpha;
	cout << " \n Input any Alphabet (a to z) : ";
	alpha=getche();//using getche because user cant give more then one character..
	cout<< endl;
	if (alpha=='a' || alpha=='A')
	cout<< " \'"<< alpha << "\' is a vowel...";
	
	else if (alpha=='e' || alpha =='E')
	cout<< " \'"<< alpha << "\' is a vowel...";
	
	else if (alpha=='i' || alpha =='I')
	cout<< " \'"<< alpha << "\' is a vowel...";
	
	else if (alpha=='o' || alpha =='O')
	cout<< " \'"<< alpha << "\' is a vowel...";
	
	else if (alpha=='u' || alpha =='U')
	cout<< " \'"<< alpha << "\' is a vowel...";
	else  
	cout<< " \'"<< alpha << "\' is a Consonent...";
	return 0;
}

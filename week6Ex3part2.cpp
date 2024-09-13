#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char alpha;
	cout << "\n Input Any Alphabet (A-to-Z) : ";
	alpha=getche();//using getche because user cant give more then one character..
	switch(alpha)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		cout<<"\n \'"<<alpha<<"\' is a Vowel..";
	break;
	default:
	cout << "\n \'"<<alpha<<"\' is a Consonent...";
		
}
return 0;
}

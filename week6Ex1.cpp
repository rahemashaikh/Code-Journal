#include <iostream>
using  namespace std;
int main()
{
	int day;
	cout << " Input Day Number (1-7) : " ;
	cin>> day;
	switch (day)
	{
		case 1 :
		cout << "\n The day is Monday";
		break;
		case 2 :
		cout << "\n The day is Tuesday";
		break;
		case 3 :
		cout << "\n The day is Wednesday";
		break;
		case 4 :
		cout << "\n The day is Thursday";
		break;
		case 5 :
		cout << "\n The day is Friday";
		break;
		case 6 :
		cout << "\n The day is Saturday";
		break;
		case 7 :
		cout << "\n The day is Sunday";
		break;
		default:
		cout<< "Invalid day number...";
		break;	
	}
	return 0;
}

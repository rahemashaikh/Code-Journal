#include <iostream>
using namespace std;
int main()
{
	int  month;
	cout<<" \n Input Month Number (1-12) : ";
	cin>> month;
	switch(month)
	{
	case 1 :
	cout << " Total Number of days : 31 ";
	break;
	case 2 :
	cout << " Total Number of days : 28 ";
	break;
	case 3 :
	cout << " Total Number of days : 31 ";
	break;
	case 4 :
	cout << " Total Number of days : 30 ";
	break;
	case 5 :
	cout << " Total Number of days : 31 ";
	break;
	case 6 :
	cout << " Total Number of days : 30 ";
	break;
	case 7 :
	cout << " Total Number of days : 31 ";
	break;
	case 8 :
	cout << " Total Number of days : 31 ";
	break;
	case 9 :
	cout << " Total Number of days : 30 ";
	break;
	case 10 :
	cout << " Total Number of days : 31 ";
	break;
	case 11 :
	cout << " Total Number of days : 30 ";
	break;
	case 12 :
	cout << " Total Number of days : 31 ";
	break;
	 default:
	 	cout << " Invalid Month number ..";
	 	break;
	 	

	}	
	return 0;
}

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char ch;
do 
{
	cout<< "INPUT CHARACTER : ";
	ch = getche();
	
	if(ch >= 65 && ch <=90 )
	{
	cout <<endl<< " \'" << ch <<"\' is Alphabet"<<endl;
	}
	else if(ch >= 97 && ch <=122 )
	{
	cout <<endl<< " \'" << ch <<"\' is Alphabet"<<endl;
	}
	else if (ch>=48 && ch <=57)

	cout <<endl<< "\'"<< ch << "\' is Number " <<endl;
	else if (ch == '\r')


 	break;
	else 	
	cout <<endl<< "\'"<< ch << "\' is Special character "<<endl ; 
	}
while ( ch != '\r');
	cout << endl << "Exit";	
	return 0;
}

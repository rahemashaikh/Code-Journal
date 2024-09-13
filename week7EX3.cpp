#include <iostream>
using namespace std;
int main()
{
	int row,col,space;
	cout<< endl;
	for(row=1 ; row<=6 ;row++)
	{
			cout<<"   "; 
		for(space=5; space>=row; space--)
		{
			cout << ' ';
		}
			for(col=1 ; col<=2*row-1 ; col++)
			{
	
				cout<< '*';
			}
	cout << endl;
	}
	
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int arr[3][3];
	int array[3][3];
	cout<<" An Integer Double Dimensional Array ";
	cout<<"\n Enter Elements  Of The Square Matrix (3X3)\n";
	cout<<"\n Enter Elements  In the First Matrix\n";
	int frstR,frstc,r,c;
	for(int frstR=0; frstR<3;frstR++)
	{
	for(int frstc= 0; frstc<3; frstc++)
	{
	cout<<" ["<< frstR <<"]["<< frstc <<"] : ";
	cin>>arr[frstR][frstc];
	}
	}
		cout<<"\nEnter elements for Second Array\n";
		for(int r=0 ; r<3 ; r++){
	
		for(int c=0 ; c<3; c++)
		{
			cout<<"["<< r <<"]["<< c <<"] : ";
			cin>>array[r][c];
		}
	}
	cout <<" \n Elements in First Array are : \n"<< endl;
		for(int frstR=0;frstR<3;frstR++)
	{
		for(int frstc=0;frstc<3;frstc++)
	{
	cout<<setw(6)<<arr[frstR][frstc]<<" ";
	 }
		cout<<endl;	
	}
		cout<<" \n Element in Second matrix :\n";
		for(int r=0;r<3;r++)
	{
		for(int c=0; c<3;c++)
	{
		cout<<setw(6)<<array[r][c]<< " ";
	 }
		cout<<endl;
	}	
		cout <<"\n Addition Of Two Matrix : \n";
		for(int r1=0;r1<3;r1++)
		{
		for(int c1=0;c1<3;c1++)
		{
			int add= arr[r1][c1]+array[r1][c1];
	
		cout<<setw(7)<<add<< "  ";				
		}
		cout<<endl;
		}
		return 0 ;
	}


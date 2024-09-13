#include <iostream>
using namespace std;
int main()
{
	int great,less,line;
	cout <<"\n \n";
	
	for(line=1;line<=10;line++)
	{
		cout<<"   ";
		for(great=1;great<=line;great++)
		{
			cout<<"<";
		}
		cout<<" - ";
		for(less=10;less>=line;less--)
		{
			cout<<">";
			
		}
		cout<<endl;
	}
	return 0;
}

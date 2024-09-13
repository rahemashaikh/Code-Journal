#include <iostream>
#include <iomanip>
using namespace std;

 int main(){
 	char ch = 129;
	cout<< "\n \n";
 	for(int a = 129 ; a<=256 ; a++)
 	{
	 ch = a; 	
 	cout<<setw(8)<<a<<setw(4)<<ch << "   ";
}

		return 0;
 	
 }

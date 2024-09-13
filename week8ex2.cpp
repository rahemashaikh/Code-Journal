#include <iostream>
using namespace std;
int main()
{
	int loc ,small,arr[10],k;
	for( k = 0;k<10;k++)
	{
	cout << " Enter Element number "<< k+1<< " :  ";
	cin>> arr[k];	
	}
	small=arr[0];					
	for(k=0;k<10;k++)
	if(small>arr[k]) 
	{	
	loc=arr[k];			
	small=arr[k];
	}	
	cout <<"The Smallest  Element is : " <<loc;
	
	return 0;
	
}

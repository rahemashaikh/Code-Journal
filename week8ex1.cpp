#include <iostream>
using namespace std;
int main()
{
int arr[5];
int a,sum=0;
float avrg;
cout<<" An integer Array......"<< endl;
cout<<" Enter 5 elements in array" << endl;
for(a=0;a<5;a++)
{
	cout<<"Enter arr[" << a+1 << "] : ";
	cin>>arr[a];
	sum+=arr[a];
}
cout<<" Elements in array are : " <<endl;
for(a=0;a<5;a++){
cout<<"arr[" << a+1 << "] : " << arr[a]<<endl;
}
cout<< " Sum of array = " << sum <<endl;
avrg= (float)sum/5;
cout<<" Average of array = "<< avrg <<endl;
return 0;
}

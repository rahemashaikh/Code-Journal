#include <iostream>
using namespace std;
int main()
{
	int num;
do
{
	cout << " Input Any Num Between 0 to 99 : ";
	cin>> num;
	int x =num/10;
	int y = num%10;
	
	if(num==0)
	break;
	if(num>=20 && num <= 99|| num <=9  )
	{
		switch (x)
	{
		case 2 : cout << " Twenty";break;
		case 3 : cout << " Thirty";break;
		case 4 : cout << " Forty";break;
		case 5 : cout << " Fifty";break;
		case 6 : cout << " sixty";break;
		case 7 : cout << " Seventy";break;
		case 8 : cout << " Eighty";break;
		case 9 : cout << " Ninty";break;
		
	}
		switch (y)
	{
	
	case 1 :cout << " One"  ; break;
	case 2 :cout << " Two" ; break;
	case 3 :cout << " Three" ; break;
	case 4 :cout << " Four" ; break;
	case 5 :cout << " Five" ; break;
	case 6 :cout << " Six" ; break;
	case 7 :cout << " Seven" ; break;
	case 8 :cout << " Eight" ; break;
	case 9 :cout << " Nine" ; break;
	
	}
}
	
	cout<< endl;

if (num >=10 && num <= 19 )
	{
	switch (num)
	{
		case 10 :cout << " Ten" ; break;
	case 11 :cout << " Eleven" ; break;
	case 12 :cout << " Twelve" ; break;
	case 13 :cout << " Thirteen" ; break;
	case 14:cout << " Forteen" ; break;
	case 15 :cout << " Fifteen" ; break;
	case 16 :cout << " Sixteen" ; break;
	case 17 :cout << " Seventeen" ; break;
	case 18 :cout << " Eighteen" ; break;
	case 19 :cout << " Nineteen" ; break;
		
	} 
	cout<< endl;
}





	
}


	
while(num!=0);
cout<<"Exit";
return 0;	
}
	


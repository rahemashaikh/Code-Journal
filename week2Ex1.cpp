#include <iostream>
using namespace std;
int main()
{
float tempK ;
float tempF;
char deg = 248;
cout<< " Program to convert temperature from Kelvin To Fahrenheit "<< endl <<endl;
cout<<" Enter The Temperature in Kelvin :";
cin>>tempK;
tempF=(tempK-273.15) * 9/5 + 32;
cout<<" The temperature in Fahrenheit is :"<< endl;

cout<<" " << deg <<"F = "<< tempF;
return 0;

}

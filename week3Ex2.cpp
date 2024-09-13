#include <iostream>
using namespace std;
 int main()
 {
 	int a ,b;
 	float result;
 	cout<< " Enter First Number : " ;
 	cin>>a;
 	cout<< " Enter Second number : ";
 	cin>>b;
 	result = a+b;
 	cout<< a<< " + "  <<b<<" = "<< result<<endl;
 	result = a-b;
 	cout<< a<< " - "  <<b<<" = "<< result<<endl;
 	result = a*b;
 	cout<< a<< " * "  <<b<<" = "<< result<<endl;
 	result = (float)a/b;
 	cout<< a<< " / "  <<b<<" = "<< result<<endl;
 	result = a%b;
 	cout<< a<< " % "  <<b<<" = "<< result;
 	return 0;
 }

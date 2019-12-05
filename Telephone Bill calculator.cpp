#include<iostream>
using namespace std;
int main()
{
	//The telephone bill is to be computed as follows:
	//Minimum Rs.600 for up to 100 calls
	//Plus Rs. 0.60 per call for next 50 call 
	//Plus Rs. 0.50 per call for next 50 calls
	//Plus Rs. 0.40 per call for any call beyond 200 
	//Write a program to compute the monthly telephone bill for given number of calls.
	int a, b, c, d;
	cout << "Please enter the number of calls : ";
	cin >> a;
	while (a < 0)
	{
		cout << "Please enter a postive value.";
		cout<<"Please enter the number of calls : ";
		cin >> a;
	}
	if (a <= 100)
	{
		c = a * 6;
		cout << "Total bill : " << c <<"$"<< endl;
	}
	else if (a < 100 && a <= 150)
	{
		c = ((a-100)*.6) + 600;
		cout << "Total bill : " << c << "$" << endl;
	}
	else if (a < 150 && a <= 200)
	{
		c = ((a - 150 * .5)+(50*.6)+ 600);
		cout << "Total bill : " << c << "$" << endl;
	}
	else if (a > 200)
	{
		c = ((a - 200 * .4) + (50 * .6) + (50 * .5) + 600);
		cout << "Total bill : " << c << "$" << endl;
	}
	system("pause");
}
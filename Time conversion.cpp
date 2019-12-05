#include<iostream>
using namespace std;
int main()
{
	//Q2. Write a program that asks the user to enter a number of seconds There are 60 seconds in a minute. 
	//If the number of seconds entered by the user is greater than or equal to 60, the program should display the number of minutes in that many seconds. 
	//There are 3,600 seconds in an hour.If the number of seconds entered by the user is greater than or equal to 3,600, the program should display the number of hours in that many seconds. 
	//There are 86,400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86,400, the program should display the number of days in that many seconds. 
	float a, b, c;
	cout << "Please enter the number of seconds : ";
	cin >> a;
	if (a >= 60 && a<=3599)
	{
		b = a / 60;
		cout << "Number of minutes in that seconds : " << b << "sec." << endl;
	}
	else if (a >= 3600 && a <= 86399)
	{
		b = a / 3600;
		cout << "Number of hours in that seconds : " << b << "hours." << endl;
	}
	else if (a >= 86400)
	{
		b = a / 86400;
			cout << "Number of days in that seconds : " << b << "days." << endl;
	}
	system("pause");
}
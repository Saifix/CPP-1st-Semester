#include<iostream>
using namespace std;
int main()
{
	// A software company sells a package that retails for 99$. Quantity discounts are given according to the following table.
	//Quantity Discount 10–19 20 % - 20–49 30 % -  50–99 40 % - 100 or more 50 %
	//Write a program that asks for the number of units sold and computes the total cost of the purchase.Input Validation :
	//Make sure the number of units is greater than 0.
	int a, b;
	cout << "PLease enter the units purchased : ";
	cin >> a;
	while (a > 0);
	{
	cout<<"PLease enter value equal to or greater than zero"<<endl;	
	cin >> a;
	} 
		;
		if (a >= 1 && a < 10)
		{
			b = a * 99;
			cout << "Total costs of all purchased units :" << b << "$" << endl;
			cout << " Discout percentage : 0%" << endl;
		}
		else if (a >= 10 && a <= 19)
		{
			b = (a * 99) - ((a * 99)*(20 / 100));
			cout << "Total cost of all purchased units : " << b << "$" << endl;
			cout << "Discount percentage : 20%" << endl;
		}
		else if (a >= 20 && a <= 49)
		{
			b = (a * 99) - ((a * 99)*(30 / 100));
			cout << "Total cost of all purchased units : " << b << "$" << endl;
			cout << "Discount percentage : 30%" << endl;
		}
		else if (a >= 50 && a <= 99)
		{
			b = (a * 99) - ((a * 99)*(40 / 100));
			cout << "Total cost of all purchased units : " << b << "$" << endl;
			cout << "Discount percentage : 40%" << endl;
		}
		else if (a >= 100)
		{
			b = (a * 99) - ((a * 99)*(50 / 100));
			cout << "Total cost of all purchased units : " << b << "$" << endl;
			cout << "Discount percentage : 50%" << endl;
		}
		system("pause");
	}

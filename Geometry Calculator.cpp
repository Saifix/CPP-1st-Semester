#include<iostream>
using namespace std;
int main()
{
	//Write a program that displays the following menu: 
	//Geometry Calculator 
	//1.Calculate the Area of a Circle 
	//2.Calculate the Area of a Rectangle
	//3.Calculate the Area of a Triangle
	//4.Quit
	int a,b,c,d,e;
	cout << "\tGeometry Calculator\nCalculate the Area of a Circle------1\nCalculate the Area of a Rectangle---2\nCalculate the Area of a Triangle----3\nQuit--------------------------------4\n";
	cout << "Please enter your desired action : ";
	cin >> a;
	while (a < 4 && a < 0)
	{
		cout << "Please enter only given intergers in menu" << endl;
		cout << "Please enter your desired action : ";
		cin >> a;
	}
	{
		switch (a)
		{
		case 1:
			cout << "Please enter the radius of the circle : ";
			cin >> b;
			while (b <= 0)
			{
				cout << "Please enter a positive integer greater than zero " << endl;
				cout << "Please enter the radius of the circle : ";
				cin >> b;
			}
			c = 3.14*pow(b, 2);
			cout << "Area of the circle : " << c << endl;
			break;
		case 2:
			cout << "Please enter width of rectagle : ";
			cin >> d;
			while (d <= 0)
			{
				cout << "Please enter a positive integer greater than zero " << endl;
				cout << "Please enter width of rectagle : ";
				cin >> d;
			}
			cout << "please enter lenght of rectangle : ";
			cin >> e;
			while (e <= 0)
			{
				cout << "Please enter a positive integer greater than zero " << endl;
				cout << "Please enter length of rectagle : ";
				cin >> e;
			}
			c = d * e;
			cout << "Area of Rectangle : " << c << endl;
			break;
		case 3:
			cout << "PLease enter the base of tirangle : ";
			cin >> d;
			while (d <= 0)
			{
				cout << "Please enter a positive integer greater than zero " << endl;
				cout << "Please enter base of tirangle : ";
				cin >> d;
			}
			cout << "PLease enter the height of triangle : ";
			cin >> e;
			while (e <= 0)
			{
				cout << "Please enter a positive integer greater than zero " << endl;
				cout << "Please enter height of triangle : ";
				cin >> d;
			}
			c = (0.5)*d*e;
			cout << "Area of tirangle : " << c << endl;
			break;
		case 4:
			cout << "You have selected to quit" << endl;
			break;
		}
	}
	system("pause");
}
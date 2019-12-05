#include <iostream>
using namespace std;
int main()
{
	//Write a program to read temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula c=5/9(f-32) 
	float Celcius, fahrenheit;
	cout << "PLease enter the temperatur in fahrenheit : ";
	cin >> fahrenheit;
	Celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
	cout << "Temperature in Celcius : " << Celcius << endl;
	system("pause");
}
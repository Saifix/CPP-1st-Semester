#include<iostream>
using namespace std;
int main()
{
	//Write the program to initialize a value to a variable. Calculate the cube of the given value.
	int a, b;
	cout << "Enter any integer : ";
	cin >> a;
	b = pow(a, 3);
	cout << "Cube of the given value is : " << b << endl;
	system("pause");
}

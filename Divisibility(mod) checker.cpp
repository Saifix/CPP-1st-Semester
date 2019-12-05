#include<iostream>
using namespace std;
int main()
{
	//Write a program to input a number. If the number is divisible by 3 then print the message on the screen that “the number is divisible by 3”.
	int a, b;
	cout << "Please enter any value : ";
	cin >> a;
	if (a % 3 == 0)
	{
		cout << "Value is divisible by three "<<endl;
	}
	else
	{
		cout << "Value is not divisible by 3"<<endl;
	}
	system("pause");
}
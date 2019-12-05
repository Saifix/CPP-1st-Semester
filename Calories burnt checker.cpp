#include<iostream>
using namespace std;
int main()
{
	//Running on a particular treadmill, you burn 3.9 calories per minute. 
	//Write a program that uses a loop to display the number of calories burned after 10, 15, 20, 25, 30 minutes. 
	int a,b,c;
	cout << "Calories burnt on treadmill per minute = 3.9 calories" << endl;
	for (a = 10; a <= 30; a++)
	{
		if (a % 5 == 0)
		{
			c = a * 3.9;
			cout << "Number of calories burnt after " << a << ":  " << c << " calories" << endl;
		}
		else{}
	}
	system("pause");
}
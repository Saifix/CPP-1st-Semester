#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x, y;
	char z;
	cout << "Enter the value of x";
	cin >> x;
	cout << "Enter the value of y";
	cin >> y;
	cout << "Enter opertaor(+,-,/,*)";
	cin >> z;
	switch (z)
	{
	case'+':
	{
		int c = x + y;
		cout << "c=" << c;
		break;
	}
	case '-':
	{
		int b;
		b = x - y;
		cout << "b=" << b;
		break;
	}
	case '*':
	{
		int d;
		d = x * y;
		cout << "d=" << d << endl;
		break;
	}
	case '/':
	{
		int f;
		f = x / y;
		cout << "f=" << f << endl;
		break;
	}
	}
	system("pause");
}
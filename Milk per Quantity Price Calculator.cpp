#include <iostream>
using namespace std;
int main()
{
	//Milk per quantity price calculator
	string x ("Milk");
	int Quantity;
	float Price;
	cout<<"Please input the name of item"<<endl;
	cin>>x;
	cout<<"Please input numbers of items bought"<<endl;
	cin>>Quantity;
	cout<<"Please input the price of each item"<<endl;
	cin>>Price;
	cout<<"--------------------------------"<<endl;
	cout<<"The item you bought is "<<x<<endl;
	float cost;
	cost=Quantity*Price;
	cout<<"--------------------------------"<<endl;
	cout<<"The total bill is $"<<cost<<endl;
	cout<<"--------------------------------\a"<<endl;
	system ("pause");
}

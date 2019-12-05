#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Beverages avaible to choose from are"<<endl;
	cout<<"coke\t\t    1"<<endl;
	cout<<"sprite\t\t   2"<<endl;
	cout<<"7up           3"<<endl;
	cout<<"dew           4"<<endl;
	cout<<"pepsi         5"<<endl;
	cout<<"Please choose your desired drink = ";
	cin>>a;
	if(a==1)
	{
		cout<<"Your chosen beverge is coke"<<endl;
	}
	else if(a==2)
	{
		cout<<"Your chosen beverage is sprite"<<endl;
	}
	else if(a==3)
	{
		cout<<"Your chosen bevage is 7up"<<endl;
	}
	else if(a==4)
	{
		cout<<"Your chosen bevage is dew"<<endl;
	}
	else if(a==5)
	{
		cout<<"your chosen drink is pepsi"<<endl;
	}
	system("pause");
}

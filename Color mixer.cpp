#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x ("color1");
	string i ("color2");
	string r ("red");
	string b ("blue");
	string p ("purple");
	string g ("green");
	string y ("yellow");
	cout<<"Enter first desired color = ";
	cin>>x;
	cout<<"Enter second desired color = ";
	cin>>i;
	if(x==r,i==b)
	{
		cout<<"New color is purple"<<endl;
	}
	else if(x==r,i==y)
	{
		cout<<"New color is orange"<<endl;
	}
	else if(x==b,i==y)
	{
		cout<<"New color is green"<<endl;
	}
	system("pause");
}

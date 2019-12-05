#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter the value of length of first triangle = ";
	cin>>a;
	cout<<"Enter the value of the width of first triangle = ";
	cin>>b;
	int area1,area2;
	area1=a*b;
	cout<<"Area of the first rectangle = "<<area1<<endl;
	cout<<"Enter the value of length of second triangle = ";
	cin>>c;
	cout<<"Enter the value of the width of second triangle = ";
	cin>>d;
	area2=c*d;
	cout<<"Area of the second rectangle = "<<area2<<endl;
	if(area1>area2)
	{
		cout<<"area of first triangle is greater than second one";
	}
	else
	{
		cout<<"area of second triangle is greater than first one"<<endl;
	}
	system("pause");
}

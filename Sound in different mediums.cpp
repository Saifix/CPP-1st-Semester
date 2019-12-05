#include<iostream>
using namespace std;
int main()
{
	float a,t,d;
	string x ("m");
	cout<<"Please choose Type of Gas medium:"<<endl;
	cout<<"Carbon dioxide        1"<<endl;
	cout<<"Air                   2"<<endl;
	cout<<"Helium                3"<<endl;
	cout<<"Hydrogen              4"<<endl;
	cout<<"Please choose by entering mentioned integer:";
	cin>>a;
	if (a==1)
	{
		cout<<"Your chosen gas medium is Carbon dioxide."<<endl;
		cout<<"Please enter the time(sec) taken by sound = ";
		cin>>t;
		d=258*t;
		if(t<=30)
		{
		cout<<"Distance covered by the sound = "<<d<<x<<endl;
    	}
		else
		{
		cout<<"You can only enter time equal to or below 30 sec"<<endl;
    	}
    	system("pause");
	}
	if (a==2)
	{
		cout<<"Your chosen gas medium is Air."<<endl;
		cout<<"Please enter the time(sec) taken by sound = ";
		cin>>t;
		d=331.5*t;
		if(t<=30)
		{
		cout<<"Distance covered by the sound = "<<d<<x<<endl;
    	}
		else
		{
		cout<<"You can only enter time equal to or below 30 sec"<<endl;
    	}
    	system("pause");
	}		
		if (a==3)
	{
		cout<<"Your chosen gas medium is Helium."<<endl;
		cout<<"Please enter the time(sec) taken by sound = ";
		cin>>t;
		d=972*t;
		if(t<=30)
		{
		cout<<"Distance covered by the sound = "<<d<<x<<endl;
    	}
		else
		{
		cout<<"You can only enter time equal to or below 30 sec"<<endl;
    	}
    	system("pause");
	}
	if (a==4)
	{
		cout<<"Your chosen gas medium is Hydrogen."<<endl;
		cout<<"Please enter the time(sec) taken by sound = ";
		cin>>t;
		d=1270*t;
		if(t<=30)
		{
		cout<<"Distance covered by the sound = "<<d<<x<<endl;
    	}
		else
		{
		cout<<"You can only enter time equal to or below 30 sec"<<endl;
    	}
    	system("pause");
	}
	if (a>4)  
	{
		cout<<"Your desired Gas medium is not avaible or invalid input has been observed."<<endl;
		system("pause");
	}
}

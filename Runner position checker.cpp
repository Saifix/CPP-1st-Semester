#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t1,t2,t3;
	string r1 ;
	string r2 ;
	string r3 ;
	cout<<"Enter the name of First runner = ";
	cin>>r1;
	cout<<"Enter time taken by first runner = ";
	cin>>t1;
	cout<<"Enter the name of Second runner = ";
	cin>>r2;
	cout<<"Enter time taken by second runner = ";
	cin>>t2;
	cout<<"Enter the name of third runner = ";
	cin>>r3;
	cout<<"Enter time taken by third runner = ";
	cin>>t3;
	if((t1>t2)&&(t1>t3)&&(t2>t3))
	{
		cout<<"Runner1 came on 1st positon,Second Runner came on 2nd positon,Third runner came on 3rd positon"<<endl;
	}
	else if((t2>t3)&&(t2>t3)&&(t3>t1))
	{
		cout<<"Second Runner came on 1st positon,Third Runner came on 2nd positon,First runner came on 3rd positon"<<endl;
	}
	else if((t3>t1)&&(t3>t2)&&(t1>t2))
	{
		cout<<"Third Runner came on 1st positon,First Runner came on 2nd positon,Second runner came on 3rd positon"<<endl;
	}
	
	
	system("pause");
}

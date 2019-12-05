#include <iostream>
using namespace std;
int main()
{
	//Programme to find sum and average of five variables
	int A,B,C,D,E;
	cout<<"Enter the value of variable (A) = ";
	cin>>A;
	cout <<"Enter the value of variable (B) = ";
	cin>>B;
	cout<<"Enter the value of variable (C) = ";
	cin>>C;
	cout<<"Enter the value of variable (D) = ";
	cin>>D;
	cout<<"Enter the value of variable (E) = ";
	cin>>E;
	float Sum;
	Sum=A+B+C+D+E;
	cout<<"Sum = "<<Sum<<endl;
	cout<<"Now calculating average of given variables"<<endl;
	float Average;
	Average=(A+B+C+D+E)/5;
	cout<<"Average of given variables = \a"<<Average<<endl;
	return 0;
}

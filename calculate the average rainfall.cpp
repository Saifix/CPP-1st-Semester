//Q9. Write a program that uses nested loops to collect data and calculate the average rainfall over a period of years. 
//The program should first ask for the number of years. The outer loop will iterate once for each year. 
//The inner loop will iterate twelve times, once for each month. 
//Each iteration of the inner loop will ask the user for the inches of rainfall for that month.
//After all iterations, the program should display the number of months, the total inches of rainfall, and the average rainfall per month for the entire period. 
//Input Validation: Do not accept a number less than 1 for the number of years. Do not accept negative numbers for the monthly rainfall.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f=02,g;
	cout<<"Please enter number of years : ";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=12;c++)
		{
			cout<<"Please enter the inches of rainfall in "<<c<<" month of year "<<b<<"  :";
			cin>>d;
			while(d<0)
			{
				cout<<"Please enter a positive value."<<endl;
				cout<<"Please enter the inches of rainfall in "<<c<<" month of year "<<b<<"  :";
			    cin>>d; 
			 } 
			 f+=d;
		}
    cout<<"Total inches of rainfall : "<<f<<" inches"<<endl;
	cout<<"Areage rainfall per month : "<<(f/12)<<" inches"<<endl;
	}

	system("pause"); 
}

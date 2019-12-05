#include <iostream>
using namespace std;
int main()
{
	cout<<"The number of shares that Joe purchased was 1,000"<<endl;
	cout<<"When Joe purchased the stock, he paid $45.50 per share"<<endl;
	cout<<"Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the stock"<<endl;
	cout<<"The number of shares that Joe sold was 1,000"<<endl;
	cout<<"He sold the stock for $56.90 per share"<<endl;
	cout<<"He paid his stockbroker commission that amounted to 2% of the amount he received for the stock"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	float amount1,amount2,amount3,pro1,pro2,com1,com2;
	string x ("$");
	string y ("%");
	amount1=1000*45.50;
	cout<<"The amount of money Joe paid for the stock = "<<amount1<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	com1=amount1*(0.002);
	cout<<"The amount of commission Joe paid his broker when he bought the stock = "<<com1<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	amount2=1000*56.96;
	cout<<"The amount that Joe sold the stock for = "<<amount2<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	com2=amount2*(0.002);
	cout<<"The amount of commission Joe paid his broker when he sold the stock = "<<com2<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	pro1=amount2-amount1;
	cout<<"amount of profit that Joe made after selling his stock = "<<pro1<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	pro2=pro1-(com1+com2);
	cout<<"Amount of profit after paying two commissions to broker = "<<pro2<<x<<endl;
	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
	system("pause");
}

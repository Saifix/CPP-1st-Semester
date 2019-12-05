#include <iostream>
using namespace std;
int main()
{
	cout<<"Total purchase = $95"<<endl;
	cout<<"Sales tax on purchase = 2%"<<endl;
	cout<<"Country tax on purchase = 4%"<<endl;
	cout<<"Total tax on purchase = 6%"<<endl;
	float t_tax;
	t_tax=95*(6/100);
	cout<<"Amout of total taxes on purchase = $"<<t_tax<<endl;
	system("pause");
}

#include <iostream>
using namespace std;
int main()
{
	int Marks;
	cout<<"Enter the marks obtained  = ";
	cin>>Marks;
	if(Marks>75)
	{
		cout<<"Grade obtained = A"<<endl;
	}
	else if ((75<Marks)&&(Marks<60))
	{
		cout<<"Grade obtained = B"<<endl;
	}
    else if ((60<Marks)&&(Marks<50))
	{
		cout<<"Grade obtained = C"<<endl;
	}
	else((50<Marks)&&(Marks<40));
	{
		cout<<"Grade obtained= D"<<endl;
	}
	system("pause");
}

#include <iostream>
using namespace std;
int main()
{
	float temp;
	cout<<"Please enter the temperature(`F) : ";
	cin>>temp;
	if(temp<=-362)
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Oxygen(-362`F)                  Nil"<<endl;
		cout<<"Ethyl Alchol(-173`F)"<<endl;
		cout<<"Mercury(-38`F)"<<endl;
		cout<<"Water(32`F)"<<endl;
		system("pause");
	}
	else if(temp>-362 && temp<=-306)
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Ethyl Alcohol(-173`F)           Oxygen(-306`F)"<<endl;
		cout<<"Mercury (-38`F)"<<endl;
		cout<<"Water(32`F)"<<endl;
		system("pause");
	}
		else if((temp>-306) && (temp<=-173))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Ethyl Alcohol(-173`F)           Oxygen(-306`F)"<<endl;
		cout<<"Mercury (-38`F)"<<endl;
		cout<<"Water(32`F)"<<endl;
		system("pause");
	}
	else if((temp>-173) && (temp<=-38))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Mercury(-38`F)                 Qxygen(-306`F)"<<endl;
		cout<<"Water(32`F)"<<endl;
		system("pause");
	}
	else if((temp<-38) && (temp<=-32))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Water(32`F)                    Qxygen(-306`F)"<<endl;
		system("pause");
	}
	else if(temp>=676)
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<" Nil                            Mercury(676`F)"<<endl;
		cout<<"                                Ethyl Alchol(172`F)"<<endl;
		cout<<"                                Water(212`F)"<<endl;
		cout<<"                                Qxygen(-306`F)"<<endl;
		system("pause");
	}
	else if((temp<676) && (temp>=212))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<" Nil                            Water(212`F)"<<endl;
		cout<<"                                Ethyl Alchol(172`F)"<<endl;
		cout<<"                                Qxygen(-306`F)"<<endl;
		system("pause");
	}
	else if((temp<212) && (temp>=172))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<" Nil                            Ethyl ALchol(172`F)"<<endl;
		cout<<"                                Oxygen(-306`F)"<<endl;
		system("pause");
	}
	else if((temp<172) && (temp>-32))
	{
		cout<<"At selected temperature following substances will Freeze and Boil:"<<endl;
		cout<<"Freeze                          Boil"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<" Nil                            Oxygen(-307`F)"<<endl;
		system("pause");
	}
}

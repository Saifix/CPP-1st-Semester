#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;
class Die
{
private:
    int points=0;
	int dienum;
public:
	int die_num()
	{
		srand(time(NULL));
		dienum = rand() % 6 + 0;
		cout << "The number you have got on dice is " << dienum << endl;
		return dienum;
	}
	int get_point()
	{
		if (dienum == 0)
		{
			cout << "You have got a mermaid!! " << endl << "Points earned = 10000!" << endl;
			points = points + 10000;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 1)
		{
			cout << "You have got a huge fish!! " << endl << "Points earned = 500!" << endl;
			points = points + 500;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 2)
		{
			cout << "You have got a medium fish! " << endl << "Points earned = 350!" << endl;
			points = points + 350;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 3)
		{
			cout << "You have got a small fish! " << endl << "Points earned = 250!" << endl;
			points = points + 250;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 4)
		{
			cout << "You have got a shoe ! " << endl << "Points earned = 10!" << endl;
			points = points + 10;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 5)
		{
			cout << "You have got a nothing! " << endl << "Points earned = 0!" << endl;
			points = points + 0;
			cout << "Your total points = " << points << endl;
		}
		else if (dienum == 6)
		{
			cout << "You have got a Pearl SeaShell ! " << endl << "Points earned = 1000!" << endl;
			points = points + 1000;
			cout << "Your total points = " << points << endl;
		}
		return points;
	}
	void T_points()
	{
		cout << endl;
		cout << "                         Total points you earned : " << points << endl << endl;
		cout << "                          Thank you for playing" << endl << "                                Goodbye!" << endl;
	}
};
int main()
{
	Die player;
	int dienum=0,points=0;
	cout << "********************************************************************" << endl;
	cout << "*                                                                  *" << endl;
	cout << "*                Welcome to Fishing Game smilator                  *" << endl;
	cout << "*                This Game will test your Luck!!                   *" << endl;
	cout << "*                                                                  *" << endl;
	cout << "********************************************************************" << endl << endl;
	cout << "                        Lets start playing" << endl << endl;
	int choice;
	do
	{
		cout << endl;
		cout << "                           Rolling dice" << endl<<endl;
		player.die_num();
		player.get_point();
		cout << "Do you wish to roll the dice again ?(Type 1 to continue or 0 to leave) : ";
		cin >> choice;
	} while (choice == 1);
	player.T_points();
	system("pause");
}


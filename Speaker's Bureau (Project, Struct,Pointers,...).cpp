/* Speaker's Bureau - This program keeps track of a speaker's bureau. The
program uses a structure to store the following data about a speaker:

* Name
* Telephone Number
* Speaking Topic
* Fee Required

The program uses an array of at least 10 structures. It lets the user
enter data into the array, change the contents of any element, and
display all the data stored in the array. The program has a menu-driven
user interface.

Input Validation: When the data for a new speaker is entered, the program
ensures that the user has entered data for all the fields. No negative
amounts for a speaker's fee are accepted. */


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct speakerBureau
{
	string Name;
	int TelephoneNumber;
	string SpeakTopic;
	int fee;
};
void getSpeaker(speakerBureau *);
void printSpeaker(speakerBureau *);
void editSpeaker(speakerBureau *);
int main()
{
	cout << "                                                         | |" << endl;
	cout << "                                            _  _  _ _____| | ____ ___  ____  _____ " << endl;
	cout << "                                           | || || | ___ | |/ ___) _ `|    `| ___ |" << endl;
	cout << "                                           | || || | ____| ( (__| |_| | | | | ____|" << endl;
	cout << "                                            `_____/|_____)`_)____)___/|_|_|_|_____)" << endl;
	cout << endl;
	int NUM_SPEAKERS = 10,index, menu;
	speakerBureau info[10];
	const int enter = 1,change = 2,print = 3,search = 4,leave = 5;
	do {
		cout << "Please select a choice from the menu.\n"
			<< "1) Enter Speaker Information.\n"
			<< "2) Change Speaker Information.\n"
			<< "3) Print Speaker Information.\n"
			<< "4) Leave this menu.\n"
			<< "Select: ";
		cin >> menu;
		switch (menu)
		{
		case enter:
		{
			getSpeaker(info);
		}
		break;
		case change:
		{
			editSpeaker(info);
		}
		break;
		case print:
		{
			printSpeaker(info);
		}
		break;
		}
	} while (menu != leave);

	system("pause");
	return 0;
}
void getSpeaker(speakerBureau *p)
{
	int i = 0;
	int size = 10;
	for (i = 0; i < size; i++)
	{
		cout << "Please enter the following information of speaker " << i << " : \n";
		cout << "Speaker Name:";
		cin.ignore();
		getline(cin, p[i].Name);
		cout << "\nSpeaker Telephone Number:";
		cin.ignore();
		cin>>p[i].TelephoneNumber;
		cout << "\nSpeaker Topic:";
		cin.ignore();
		getline(cin, p[i].SpeakTopic);
		cout << "\nFee Required:";
		cin >> p[i].fee;
	}
}
void printSpeaker(speakerBureau *p)
{
	int i = 0;
	int size = 10; // Array size
	for (i = 0; i < size; i++)
	{
		cout << "The information entered for each speaker is: \n";
		cout << "Speaker " << i << endl;
		cout << "Speaker Name: " << p[i].Name << endl;
		cout << "Speaker Telephone Number: " << p[i].TelephoneNumber << endl;
		cout << "Speaker Topic: " << p[i].SpeakTopic << endl;
		cout << "Speaker Fee Required: " << p[i].fee << endl;
	}
}
void editSpeaker(speakerBureau *p)
{
	int i;
	cout << "Please enter the number of the speaker you would like to edit."
		<< endl;
	cin >> i;
	if (i <= 9)
	{
		cout << endl;
		cout << "Please enter the updated information of the speaker: \n";
		cout << "Speaker Name:";
		cin.ignore();
		getline(cin, p[i].Name);
		cout << "\nSpeaker Telephone Number:";
		cin >> p[i].TelephoneNumber;
		cout << "\nSpeaker Topic:";
		getline(cin, p[i].SpeakTopic);
		cout << "\nFee Required:";
		cin >> p[i].fee;
	}
	else
	{
		cout << "Please pick a number between 0-9" << endl;
	}
}

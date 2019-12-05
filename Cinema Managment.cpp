#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int number_of_rows = 15;
const int number_of_coulmns = 30;
int row_number, column_number, stores_prices[15];
char seats[number_of_rows][number_of_coulmns];
char answer;
void seat_chart();
char empty = '*';
char full = '#';
void purchase();
 int total = 0;
int main()
{
	cout << "\t\t********************************************************** " << endl;
	cout << "\t\t*                                                        * " << endl;
	cout << "\t\t****** Welcome to the Cinema of Emporium Mall Lahore******" << endl;
	cout << "\t\t*                                                        *" << endl;
	cout << "\t\t********************************************************** " << endl;
	cout << endl << endl;
	seat_chart();
	cout << endl;
	for (int j = 0; j < 15; j++)
	{
		cout << "Enter the price of seats in row " << j << " :";
		cin >> stores_prices[j];
		while (stores_prices[j] <= 0)
		{
			cout << "Invalid input!";
			cout << "Please enter a positive number : ";
			cin >> stores_prices[j];
		}
	}
	int MenuChoice;
	do
	{
	cout << "\t---------- Menu---------" << endl;
	cout << " 1. View Seat Prices.\n";
	cout << " 2. Purchase a Ticket.\n";
	cout << " 3. View Available Seats.\n";
	cout << " 4. View Ticket Sales.\n";
	cout << " 5. Quit the program.\n";
	cout << "____________________________\n\n";
	cout << "Please enter your choice: ";
	cin >> MenuChoice;
	
		switch (MenuChoice)
		{
		case 1:
			cout << "View Seat Prices\n\n";
			for (int i = 0; i < 15; i++)
			{
				cout << "The price for row " << (i + 1) << ": ";
				cout << stores_prices[i] << endl;
			}
			break;
		case 2:
			purchase();
			break;
		case 3:
			cout << "View Available Seats\n\n";
			for (int i = 0; i<number_of_rows; i++)
			{
				cout << "Row" << setw(2) << i << " ";
				for (int j = 0; j<number_of_coulmns; j++)
				{
					cout << setw(2) << seats[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 4:
			cout  << "Total sales : $" <<total << endl;
			break;
		case 5:
			cout << "Your have selected to Quit. Have a nice day!\n";
			break;
		}
	} while (MenuChoice != 5);
	cout << endl << endl;
	system("pause");
}
void seat_chart()
{
	char empty = '*';
	cout << "Seats available are presented by '*'" << endl;
	cout << "Seats reserved are presented by '#'" << endl;
	cout << "Seats: 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" << endl;
	for (int i = 0; i<number_of_rows; i++)
		{
			cout << "Row" << setw(2) << i << " ";
			for (int j = 0; j<number_of_coulmns; j++)
			{
				seats[i][j] = empty;
				cout << setw(2) << seats[i][j] << " ";
			}
			cout << endl;
		}
}
void purchase()
{
	char empty = '*';
	cout << "Enter the Row in which you want a seat:";							
	cin >> row_number;
	cout << "Enter the seat number:";
	cin >> column_number;
	if (seats[row_number][column_number] == full)
	{
		cout << "Seat is already booked" << endl;
		cout << "Please choose another seat" << endl;
		cout << "Please enter the Row number:";
		cin >> row_number;
		cout << "Enter the seat number:";
		cin >> column_number;
	}
	else if (seats[row_number][column_number] == empty)
	{
		cout << "Seat is purchased..." << endl;
		seats[row_number][column_number] = full;
	}
	cout << "Updating chart of seats";
	cout << "Seats: 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" << endl; // Updating Chart
	for (int i = 0; i<15; i++)
	{
		cout << "Row" << setw(2) << i << " ";
		for (int j = 0; j<30; j++)
		{
			cout << setw(2) << seats[i][j] << " ";
		}
		cout << endl;
	}
	total += (stores_prices[row_number]);
}


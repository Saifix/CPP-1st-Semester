#include<iostream>
using namespace std;
int main()
{
	//Q8.Write a program that calculates the occupancy rate for a hotel.The program should start by asking the user how many floors the hotel has.
	//A loop should then iterate once for each floor.In each iteration, the loop should ask the user for the number of rooms on the floor
	//how many of them are occupied.After all the iterations, the program should display how many rooms the hotel has, how many of them are occupied, how many are unoccupied, 
	//and the percentage of rooms that are occupied.The percentage may be calculated by dividing the number of rooms occupied by the number of rooms
	int a, b, c,d,rooms=0,oc_room=0 ;
	cout << "PLease enter the number of floors : ";
	cin >> a;
	while ( a < 1 )
	{
		cout << "Please enter value greater than 1 or not equal to 13." << endl;
		cout << "PLease enter the number of floors : ";
		cin >> a;
	}
	for (b = 1; b <= a; b++)
	{
		cout << "Please enter the number of rooms on "<<b<<" floor ";
		cin >> c;
		rooms += c;
		while (c < 10)
		{
			cout << "Rooms should be greater than or equal to 10" << endl;
			cout << "Please enter the number of rooms on " << b << " floor ";
			cin >> c;
		}
		cout << "Please enter the rooms occupied : ";
		cin >> d;
		oc_room +=d;
		while (d > c)
		{
			cout << "Invalid input" << endl;
			cout << "Please enter the rooms occupied : ";
			cin >> d;
		}
	}
	cout << "Number of rooms in hotel are : " << rooms << " rooms" << endl;
	cout << "Number of rooms occupied in hotel are :  " << oc_room << "rooms" << endl;
	cout << "Number of rooms unoccupied in hotel are : " << rooms - oc_room << "rooms" << endl;
	system("pause");
}

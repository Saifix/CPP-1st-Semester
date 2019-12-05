//**********************************************************************************************
//program that calculates and displays the total travel expenses of a businessperson on a trip.*
//**********************************************************************************************
#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
///**********************************************************************************************
//Other function definitions                                                                    *
//***********************************************************************************************
int getDays(int);
void getTime (double&, double&);
double getAirfareAmount(double);
double getCarRentalAmount (double);
double getPrivateVechileExpense(double);
void getParkingAmount(double&,double&);
void getTaxiAmount(double&,double&);
double getRegistrationFee(double);
void getHotelAmount(double&,double&);
void getMealAmount (double&,double&,int,double&,double&);
///**********************************************************************************************
//Main function in which other functions are called.                                            *
//***********************************************************************************************
int main()
{
    int days = 0;
    double arrivalTime,departureTime,airfareFee,carRentalFee,privateCarFee,vechileExpense,privateCarMilage = .38,
	parkingFee,taxiFee,registrationFee,spentTotal,allowedTotal,mealTotal,total,allowedParking,allowedTaxiFee,hotelFee,
	nightlyRate,allowedHotelFee,hotelFeeTotal,allowedBreaksfastFee,allowedLunchFee,
    allowedDinnerFee,breaksfastFee,lunchFee,dinnerFee,allowedMealTotal;
    string employeeName;
    int d;
    double parkingSpent;
    double taxiSpent;
    double spentMealTotal;
    cout<<"                                                         | |"<<endl;                       
    cout<<"                                            _  _  _ _____| | ____ ___  ____  _____ "<<endl;
    cout<<"                                           | || || | ___ | |/ ___) _ `|    `| ___ |"<<endl;
    cout<<"                                           | || || | ____| ( (__| |_| | | | | ____|"<<endl;
    cout<<"                                            `_____/|_____)`_)____)___/|_|_|_|_____)"<<endl;
    cout<<endl;
    cout<<setw(20)<<"Employee Buisness Expense Report"<<endl; 
    cout<<setw(20)<<"________________________"<<endl<<endl; 
    cout<<endl;
    days = getDays(days);
    d = static_cast<int>(days);
    cout<<endl;
    getTime (departureTime,arrivalTime);
    cout<<endl;
//*******************************************************************************
    cout <<"TRAVEL  "<<endl;
    cout <<"--------"<<endl;
    airfareFee = getAirfareAmount(airfareFee);
    carRentalFee = getCarRentalAmount(carRentalFee);
    getPrivateVechileExpense(privateCarFee);
    allowedParking = 6.00 * days;
    getParkingAmount(parkingFee, allowedParking);
    taxiSpent = days * taxiFee;
    allowedTaxiFee = 6.00 * days;
    getTaxiAmount (taxiFee,allowedTaxiFee);
    cout <<endl;
//*******************************************************************************
    cout <<"FEE"<<endl;
    cout <<"---"<<endl;
    registrationFee= getRegistrationFee(registrationFee);
    allowedHotelFee = 90.00 * days;
    getHotelAmount (hotelFee,allowedHotelFee);
    cout<< endl;
//*******************************************************************************
    cout <<"MEAL"<<endl;
    cout <<"----"<<endl;
    allowedBreaksfastFee = 9.00 * days;
    allowedLunchFee = 12.00 * days;
    allowedDinnerFee = 16.00 * days;    
    allowedMealTotal = allowedBreaksfastFee+allowedLunchFee+allowedDinnerFee;
    mealTotal= breaksfastFee +lunchFee +dinnerFee; 
    getMealAmount (allowedMealTotal,spentMealTotal, days, departureTime, arrivalTime);
    cout<<endl;
//********************************************************************************
    spentTotal=airfareFee+carRentalFee+privateCarFee+parkingFee+taxiFee+registrationFee+hotelFee+spentMealTotal+privateCarMilage;
    allowedTotal=airfareFee+carRentalFee+privateCarFee+allowedParking+allowedTaxiFee+registrationFee+allowedHotelFee+allowedMealTotal+privateCarMilage;
//********************************************************************************   
    cout <<"Employee Expense Report for "<<endl;
    cout << "Total Days of trip: "<<days<<endl;
    cout << fixed << setprecision(2);
    cout << "Departure time: "<< departureTime<<setw(20)<<"Arrival time: " <<arrivalTime<<endl; 
    cout <<setw(8)<<setprecision(2)<<showpoint<<fixed;
    cout<<endl;
    cout << setw(29)<<"Spent"<<setw(20)<< "Allowed"<<endl;
    cout << setw(30)<<"_________"<<setw(20)<<"_________"<<endl;
    cout <<"Airfare"<<setw(20)<<airfareFee<<setw(20)<<airfareFee<<endl;
    cout <<"Car Rental"<<setw(17)<<carRentalFee<<setw(20)<<carRentalFee<<endl;
    cout <<"Milage"<<setw(21)<<privateCarMilage<<setw(20)<<privateCarMilage<<endl;
    cout <<"Parking"<<setw(20)<<parkingFee<<setw(20)<<allowedParking<<endl;
    cout <<"Taxi"<<setw(23)<<taxiFee<<setw(20)<<allowedTaxiFee<<endl;
    cout <<"Registration"<<setw(15)<<registrationFee<<setw(20)<<registrationFee<<endl;
    cout <<"Hotel"<<setw(22)<<hotelFeeTotal<<setw(20)<<allowedHotelFee<<endl;
    cout <<"Meal"<<setw(23)<<spentMealTotal<<setw(20)<<allowedMealTotal<<endl;
    cout << setw(30)<<"_________"<<setw(20)<<"_________"<<endl;
    cout <<"TOTALS"<<setw(21)<<spentTotal<<setw(20)<<allowedTotal<<endl;
    cout <<endl<<endl;
    system ("pause");
    return 0;
}
///**********************************************************************************************
//Function to ask user for much days he went on trip                                            *
//***********************************************************************************************
int getDays(int days)
{
              cout << "Please enter the number of days you spent on trip : " ;
              cin >> days;
              
              while (days < 1)
              {
                    cout << "Please enter a number greater than 1 : \a";
                    cin >> days;
              }
              return days;
}
///**********************************************************************************************
//Function to ask user for his arrival and departure time                                       *
//***********************************************************************************************
void getTime (double &departureTime, double &arrivalTime)
{
            cout << "Please enter your departure time for the trip : " ;
           cin >> departureTime;
           cout <<endl;
           while ( departureTime <0 || departureTime > 23.59)
           {
                 cout << "Error: Please enter a number between 00.00 and 23.59 : \a";
                 cin >> departureTime;
            }
           cout << "Please enter your arrival time from the trip : " ;
           cin >> arrivalTime;
            while ( arrivalTime <0 || arrivalTime > 23.59)
           {
                 cout << "Error: Please enter a number between 00.00 and 23.59 : \a";
                 cin >> arrivalTime;
            }
            return;
        }
///**********************************************************************************************
//Function to ask user for any airfare if he had paid                                           *
//***********************************************************************************************
double getAirfareAmount (double airfareFee)
{        
    cout << "Please enter total cost of air fare : ";
    cin >> airfareFee;
    while (airfareFee < 0)
    {
        cout << "Error: Please enter a number greater than 0 : \a";
        cin >> airfareFee;
    }
    return airfareFee;
}
///**********************************************************************************************
//Function to ask user for any car rental if he had paid                                        *
//***********************************************************************************************
double getCarRentalAmount (double carRentalFee)
{
    cout << "Please enter the total cost of any car rentals : ";
    cin >> carRentalFee;
    while (carRentalFee < 0)
    {
        cout << "Error:Please enter a number greater than 0 :  \a ";
        cin >> carRentalFee;
    }
    return carRentalFee;
}
///**********************************************************************************************
//Function to ask user for any private vehicle expense if he had rented a vehilcle              *
//***********************************************************************************************
double getPrivateVechileExpense (double privateCarFee)
{
    const double RATE = 0.38;
    double miles;
    cout << "Please enter any miles driven in a private vehicle : ";
    cin >> miles;
    while (miles < 0)
    {
        cout << "Error:Please enter a value greater than 0 : \a";
        cin >> miles;
    }
    privateCarFee = miles * RATE;
    return privateCarFee;
}
///**********************************************************************************************
//Function to ask user for any car parking fee he paid any                                      *
//***********************************************************************************************
void getParkingAmount(double &parkingFee, double &allowedParking)
{
       cout << "Please enter cost paid on parking : ";
       cin >> parkingFee;
       while (parkingFee < 0)
       {
             cout << "Error:Please enter a positive number : ";
             cin >> parkingFee;
       }
       return;
}
///**********************************************************************************************
//Function to ask user for any taxi charges if he paid any                                      *
//***********************************************************************************************
void getTaxiAmount (double &taxiFee, double &allowedTaxiFee)
{
int days;
       cout << "Please enter cost paid on taxi fare : ";
       cin >> taxiFee;
       while (taxiFee < 0)
       {
             cout << "Error: Enter a positive number : \a";
             cin >> taxiFee;
       }
       return;
}
///**********************************************************************************************
//Function to ask user for registration fee that he paid                                        *
//***********************************************************************************************
double getRegistrationFee (double registrationFee)
{
       cout << "Please enter cost paid on conference fees : ";
       cin >> registrationFee;
       while (registrationFee < 0)
       {
             cout << "Error: Enter a positive number : \a";
             cin >> registrationFee;
       }
       return registrationFee;
}       
///**********************************************************************************************
//Function to ask user for Hotel Residence charges that he paid                                 *
//***********************************************************************************************
void getHotelAmount(double &hotelFee,double &allowedHotelFee)
{
    double hotelFeeTotal;
    cout << "Please enter cost paid on hotel : ";
    cin >> hotelFee;
    cout <<endl;  
    while (hotelFee < 0)
       {
             cout << "Error: Enter a positive number \a: ";
             cin >> hotelFee;
       }
       return;
}     
///**********************************************************************************************
//Function to ask user for amount of meals that he paid                                         *
//***********************************************************************************************
void getMealAmount(double &allowedMealTotal,double &spentMealTotal,int days,double &departureTime,double &arrivalTime)
{
    int day;
    double breakfast;
    double lunch;
    double dinner;
    double firstDay;
    double lastDay;
    for(int day = 1; day <= days; day++)
        {         
            cout << "Day : " << day <<  endl;
            
    if (days < 2 && departureTime > 00.00 && departureTime<= 7.00)
        {
            cout << "Enter the cost of breakfast : ";
            cin >> breakfast;
            cout << "Enter the cost of lunch : ";
            cin >> lunch;
            cout << "Enter the cost of dinner : ";
            cin >> dinner;
        }
            
     if (days < 2 && departureTime > 7.01 && departureTime <=12.00)
        {
            cout << "Enter the cost of lunch : ";
            cin >> lunch;
            cout << "Enter the cost of dinner : ";
            cin >> dinner;
        }
        
     if (day < 2 && departureTime > 12.01 && departureTime <=18.00)
        {
            cout << "Enter the cost of dinner : ";
            cin >> dinner;
        }
     if (day <= days )
       {    
            cout << "Enter the cost of breakfast : ";
            cin >> breakfast;
            cout << "Enter the cost of lunch : ";
            cin >> lunch;
            cout << "Enter the cost of dinner : ";
            cin >> dinner;
       }
    
    if (day < days && arrivalTime > 8.00 && arrivalTime <= 13.00) 
        {
            cout << "Enter the cost of breakfast : ";
            cin >> breakfast;
            
        }
        
    if (day < days && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            cout << "Enter the cost of breakfast : ";
            cin >> breakfast;
            cout << "Enter the cost of lunch : ";
            cin >> lunch;  
        }
        
    if (day < days && arrivalTime > 19.01)
        {
            cout << "Enter the cost of breakfast : ";
            cin >> breakfast;
            cout << "Enter the cost of lunch : ";
            cin >> lunch;
            cout << "Enter the cost of dinner : ";
            cin >> dinner;
        }
        cout <<endl;     
}
    return ;
}


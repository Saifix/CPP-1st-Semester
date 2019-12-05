//Question: 2
//Write a program that computes and displays the charges for a patient's hospital stay. First,
//the program should ask if the patient was admitted as an in-patient or an outpatient.
//If the patient was an in-patient, the following data should be entered:
//o The number of days spent in the hospital
//o The daily rate
//o Hospital medication charges
//o Charges for hospital services (lab tests, etc.)
//The program should ask for the following data if the patient was an out-patient:
//o Charges for hospital services (lab tests, etc.)
//o Hospital medication charges
#include<iostream>
#include<cmath>
using namespace std;
double charge(int days, int rates, int charges, int mcharges)
{
	cout<<"\tPatient Hospital Stay Report"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"No. of days spent in hospital : "<<days<<"$"<<endl;
	cout<<"Daily rates                   : "<<rates<<"$"<<endl;
	cout<<"Charges for hospital services : "<<charges<<"$"<<endl;
	cout<<"Hospital Medication charges   : "<<mcharges<<"$"<<endl;
	cout<<"Total charges                 : "<<((rates+charges+mcharges)*days)<<"$"<<endl;
}
double charge(int charges,int mcharges )
{
	cout<<"\tPatient Hospital Stay Report"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Charges for hospital services : "<<charges<<"$"<<endl;
	cout<<"Hospital Medication charges   : "<<mcharges<<"$"<<endl;
	cout<<"Total charges                 : "<<(charges+mcharges)<<"$"<<endl;
}
int main()
{
	char p;
    char a = 'I', b = 'i', c = 'o' , d = 'O'; 
	int days,rates,charges,mcharges;
	cout<<"This Program computes and display a patient's hospital charges"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"Was patient admitted as an in-patient or an out-patient ?"<<endl;
	cout<<"Enter ( I ) for in-patient"<<endl;
	cout<<"Enter ( O ) for out-patient"<<endl;
	cin>>p;
	if(p==a || p== b )
	{
	cout<<"PLease enter No. of days spent in hospital : ";
	cin>>days;
	cout<<"PLease enter Daily rates                   : ";
	cin>>rates;
	cout<<"PLease enter Charges for hospital services : ";
	cin>>charges;
	cout<<"PLease enter Hospital Medication charges   : ";
	cin>>mcharges;
	cout<<endl;
	cout<<endl;
	while(days>0&&rates>0&&charges>0&&mcharges>0)
	{charge( days,  rates,  charges,  mcharges);}
	}
	else if (p==c || p==d)
	{
		cout<<"PLease enter Charges for hospital services : ";
		cin>>charges;
	    cout<<"PLease enter Hospital Medication charges   : ";
	    cin>>mcharges;
	    while(charges>0&&mcharges>0)
	    {charge( charges, mcharges );}
	}
        else
        {
         cout<<"Invalid Input"<<endl;
        } 
		system("pause");
} 


/*  Define a class in C++ with following description:
	Private Members
	A data member Flight number of type integer
	A data member Destination of type string
	A data member Distance of type float
	A data member Fuel of type float
	A member function CALFUEL() to calculate the value of Fuel as per the following criteria
	DistanceFuel <=1000500 more than 1000 and <=20001100 more than 20002200
	Public Members
	A function FEEDINFO() to allow user to enter values for Flight Number,
	Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
	A function SHOWINFO() to allow user to view the content of all the data members */

#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class flight{
	private:
		int flight_number;
		char destination[20];
		float distance;
		float fuel;
		float CALFUEL()
		{
			if(distance <=1000)
			{
				fuel = 500;
			}
			else if(distance>=1000 && distance <= 2000)
			{
				fuel =1100;
			}
			else
			{
				fuel = 2200;
			}
			return(fuel);
		}
	public:
		void FEEDINFO();
		void SHOWINFO();
};
void flight::FEEDINFO(){
	cout << "Enter the flight number: ";
	cin >> flight_number;
	fflush(stdin);
	cout << "Enter the destination name: ";
	gets(destination);
	fflush(stdin);
	cout << "Enter the distance: ";
	cin >> distance;
}
void flight::SHOWINFO(){
	cout <<"\n\nFLIGHT DETAILS.";
	cout << "\nFLISHT NUMBER: "<< flight_number;
	cout << "\nFLIGHT DESTINATION: " << destination;
	cout << "\nFLIGHT DISTANCE:" << distance ;
	
	fuel = CALFUEL();
	cout << "\nFLIGHT fuel: "<<fuel;
}
int main()
{
	flight fl;
	
	fl.FEEDINFO();
	fl.SHOWINFO();
}

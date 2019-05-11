/* 
Define a class REPORT with the following specification:
Private members :
adno4 digit admission number
name20 characters
marksan array of 5 floating point values
averageaverage marks obtained
GETAVG()a function to compute the average obtained in five subject
Public members:
READINFO()function to accept values for adno, name, marks. Invoke the function GETAVG()
DISPLAYINFO()function to display all data members of report on the screen. */

#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class REPORT{
	
	private:
		int adno;
		char name[20];
		float marks[5];
		float average;
		float GETAVG()
		{
			float sum;
			for(int i=1; i<=5; i++)
			{
				sum += marks[i];
			}
			average = sum/5;
			return(average);
		}
	public:
		void READINFO();
		void DISPLAYINFO();
};
void REPORT::READINFO(){
	cout<<"ENTRE THE ADMITION NUMBER: ";
	cin >> adno;
	fflush(stdin);
	cout <<"ENTER THE NAME: ";
	gets(name);
	fflush(stdin);
	cout<<"ENTER THE MARKS: \n";
	for(int i=1; i<=5; i++)
	{
		cin >> marks[i];
		}
}
void REPORT::DISPLAYINFO(){
	cout<<"\n\nREPORT DETAIL'S.";
	cout<<"\nADMITION NUMBER: " <<adno;
	cout <<"\nSTUDENT NAME: " << name;
	
	average = GETAVG();
	cout <<"\nAVERAGE: "<<average;
}
int main()
{
	REPORT rpt;
	
	rpt.READINFO();
	rpt.DISPLAYINFO();
}

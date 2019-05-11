/*  Define a class TEST in C++ with following description:
	Private Members
	TestCode of type integer
	Description of type string
	NoCandidate of type integer
	CenterReqd (number of centers required) of type integer
	A member function CALCNTR() to calculate and return the number of centers as (NoCandidates/100+1)
	Public Members
	- A function SCHEDULE() to allow user to enter values for TestCode,
	Description, NoCandidate & call function CALCNTR() to calculate the number of Centres
	- A function DISPTEST() to allow user to view the content of all the datamembers */

#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class TEST{
	
	private:
		int TestCode;
		char Description[50];
		int NoCandidate;
		float CenterReqd;
		float CALCNTR()
		{
			CenterReqd = (NoCandidate/(100+1));
			return (CenterReqd);
		}
	public:
		void SCHEDULE();
		void DISPTEST();
};
void TEST::SCHEDULE(){
	
	cout <<"Enter the test code: ";
	cin >> TestCode;
	fflush(stdin);
	cout <<"Enter the description: ";
	gets(Description);
	fflush(stdin);
	cout <<"Enter the number of candidate: ";
	cin >> NoCandidate;
}
void TEST::DISPTEST(){
	
	cout <<"\n\nTEST DETAILS.";
	cout <<"\nTEST CODE: " << TestCode;
	cout <<"\nDESCRIPTION: " << Description ;
	
	CenterReqd = CALCNTR();
	cout <<"\nNUMBER OF CENTER: " << CenterReqd;
}
int main()
{
	TEST ts;
	
	ts.SCHEDULE();
	ts.DISPTEST();
}

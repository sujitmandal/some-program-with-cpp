/*  Define a class batsman with the following specifications:
	Private members:
	bcode4 digits code number
	bname20 characters
	innings, notout, runs integer type
	batavgit is calculated according to the formul batavg =runs/(innings-notout)
	calcavg()Function to compute batavg
	Public members:
	readdata()Function to accept value from bcode, name, innings,notout and 
	invoke the function calcavg()
	displaydata()Function to display the data members on the screen. */


#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class batsman{
	private:
		int bcode;
		char bname[20];
		int notout, runs, innings;
		float batavg;
		float calcavg()
		{
			batavg = (runs/(innings - notout));
			return (batavg);
		}
	
	public:
		void readdata();
		void displaydata();
};
void batsman::readdata(){
	
	cout << "Enter the batsman's code: ";
	cin >> bcode;
	fflush(stdin);
	cout << "Enter the batsman's name: ";
	gets(bname);
	fflush(stdin);
	cout << "Enter the value of runs: ";
	cin >> runs;
	cout << "Enter the value of inning's: ";
	cin >> innings;
	cout << "Enter the notout value: ";
	cin >> notout;

}
void batsman::displaydata(){
		
	cout << "\n\nBATSMAN DETAILS.";
	cout << "\nbatsman's code: " << bcode;
	cout << "\nbantsman's name: " << bname;
	cout << "\nRuns: " <<runs;
	cout << "\nValue of inning's: " <<innings;
	cout << "\nNotout value: "<<notout;
	
	
	batavg = calcavg();
	cout <<"\nAvarage: "<< batavg;
}
int main()
{
	batsman bat;
	
	bat.readdata();
	bat.displaydata();
}

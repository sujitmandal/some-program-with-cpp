/*  Define a class BOOK with the following specifications :
	Private members of the class BOOK are
	BOOK NOinteger type
	BOOKTITLE20 characters
	PRICEfloat (price per copy)
	TOTAL_COST()A function to calculate the total cost for N number of copies where 
	N is passed to the function as argument.
	Public members of the class BOOK are
	INPUT()function to read BOOK_NO. BOOKTITLE, PRICE
	PURCHASE()function to ask the user to input the number of copies to be purchased.
	It invokes TOTAL_COST() and prints the total
    cost to be paid by the user.
	Note : You are also required to give detailed function definitions. */


#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class BOOK{
	
	private:
		int BOOK_NO;
		char BOOK_TITLE[20];
		float price;
		float total;
		float TOTAL_COST()
		{
			total = (BOOK_NO * price);
			return(total);
		
		}
	public:
		void INPUT();
		void PURCHASH();
};
void BOOK::INPUT()
{
	cout <<"Enter the book number: ";
	cin >> BOOK_NO;
	cout <<"Enter the book titel: ";
	cin >> BOOK_TITLE;
	cout <<"Enter the price of book's: ";
	cin >> price;
}
void BOOK::PURCHASH(){
	
	cout<<"\n\nBOOK PURCHASH DETAIL'S.";
	cout<<"\nBOOK NUMBER: " << BOOK_NO;
	cout <<"\nBOOK TITEL: " << BOOK_TITLE;
	
	total = TOTAL_COST();
	cout <<"\nTOTAL COST: " << total;
}
int main()
{
	BOOK bk;
	
	bk.INPUT();
	bk.PURCHASH();
}

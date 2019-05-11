/* Define a class student with the following specification
   Private members of class student
   admnointeger
   sname20 character
   eng. math, sciencefloat
   totalfloat
   ctotal()a function to calculate eng + math + science with float return type.
   Public member function of class student
   Takedata()Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total.
   Showdata()Function to display all the data members on the screen.  */

#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class student{
	private:
		int admno;
		char sname[20];
		float eng, math, science;
		float total;
		float ctotal()
		{ 
		total= (eng+math+science);
		 return(total);
		}
		
	public:
		void Takedata();
		void Showdata();
		 
};

void student::Takedata(){
	cout<<"enter the admition number: ";
	cin >> admno;
	fflush(stdin);
	cout<< "\nenter the student name: ";
gets(sname);
fflush(stdin);
	cout<< "\nenter the marks of english: ";
	cin >>eng;
	cout<< "\nenter the marks of math: ";
	cin >> math;
	cout<< "\nenter the marks of science: ";
	cin >>science;
	
	
}
void student::Showdata(){
	cout<<"\n\nStudent details:\n";
	cout<<"\nadmition date: " << admno;
	cout<< "\nstudent name: " <<sname;
	cout<< "\nenglish marks: " <<eng;
	cout<< "\nmath marks: " <<math;
	cout<< "\nscience marks: " <<science;

	total=ctotal();
	cout<<"\nTotal marks: " <<total;
	
}
int main()
{
	student std;
	
	std.Takedata();
	std.Showdata();
}

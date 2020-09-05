#include <iostream>
using namespace std;

//create a class of type Student
class Student{
private:		//Private members - can only be accessed through member functions
	string fName, lName;
	string address, city, state;
	int zip;
	long SID, phoneNum;
	string birthDate, email, major;
	double gpa;

public:		//Public members - can be accessed from main
	Student();							//default constructor
	Student(string fName, string lName, int CWID, string email, string major);	//parameterized constructor
	void loadPartial();
	void printData();
};

//default constructor- setting all values to NULL
Student::Student(){
	fName = "", lName = "", address = "", city = " ", state = "", zip = 99999, SID = 999999999, phoneNum = 9999999999,
			birthDate = "", email = "", major = "", gpa = 0.0;
}
//parameterized constructor- setting the values to what was passed in
Student::Student(string first, string last, int cwid, string eMail, string maj){
	fName = first; lName = last; SID = cwid; email = eMail; major = maj;
	address = "", city = " ", state = "", zip = 99999, phoneNum = 9999999999, birthDate = "", gpa = 0.0;
}
//student function used to load all user data
void Student::loadPartial(){
	cout << "Hi " << fName << ".\nPlease enter your house number and address: "; getline(cin, address);
	cout << "Enter your city:"; getline(cin,city);
	cout << "Enter your state:"; getline(cin, state);
	cout << "Enter your zip code:"; cin >> zip; cin.ignore();
	cout << "Enter your birthdate (MM/DD/YYYY):"; getline(cin, birthDate);
	cout << "Enter your phone number:"; cin >> phoneNum; cin.ignore();
}
//student function used to print all user data
void Student::printData(){
	cout << "Name: " << "\t\t"<< fName << " " << lName;
	cout << "\n\tAddress: " << "\t"<< address << ", " << city << ", " << state << ". "<< zip;
	cout << "\n\tCWID: " << "\t\t"<< SID;
	cout << "\n\tEmail: " << "\t\t"<< email;
	cout << "\n\tMajor: " << "\t\t"<< major;
	cout << "\n\tPhone Number: " << "\t"<< phoneNum;
	cout << "\n\tDOB: " << "\t\t"<< birthDate;
}


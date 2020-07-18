//include the input /output library
#include <iostream>
using namespace std;

//int main is used to begin the program
int main(){
	//print that were going to be using the cin/ cout feature
	cout << "We're getting ready to use the cin/ cout feature" << endl;

	// create variables to hold the users name, and rank
	string lastName = "";
	string rank = "";
	string firstAndLast = "";

	//ask user to enter their last name
	cout << "Enter your last name: ";
	cin >> lastName;

	//ask user to enter their last name
	cout << "Enter your rank: ";
	cin >> rank;

	//Greet user
	cout << "\nHello " << rank << " " << lastName << endl;

	//purposefully break the cin call
	cout << "\nEnter your first name: ";
	cin >> firstAndLast;

	//first and last name
	cout << "Heres the first of a loser: " << firstAndLast << endl;

	//use cin.ignore to clear the buffer of white space
	cin.ignore();

	//enter first and last name of anybody
	cout << "Whos the GOAT for basketball: " << endl;
	getline(cin,firstAndLast);
	cout << "GOAT: " << firstAndLast;

	//return the value of 0 to end the program
	return 0;
}

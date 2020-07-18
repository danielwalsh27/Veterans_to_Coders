//include the input output library
#include <iostream>
using namespace std;

//int main is used to begin the program
int main(){
	//print that were going to use the cin/cout feature
	cout << "We're getting ready to use the cin/ cout/ getline feature!!!!" << endl;

	//create variables to be used the hold name and rank
	string lastName = "", firstName = "", goat = "";
	string rank = "";
	string newVar;

	//ask user to enter their last name
	cout << "Enter your last name: " << endl;
	cin >> lastName;

	//ask user to input their rank
	cout << "Enter your rank: " << endl;
	cin >> rank;

	//greet user
	cout << "Hello " << rank << " " << lastName << endl;

	//first name entry
	cout << "Enter your first name:" << endl;
	cin >> firstName;

	//name of a loser
	cout << "Heres the first name of a loser: " << firstName << endl;

	//cin ignore statement
	cin.ignore();

	//Greatest of all time
	cout << "Name of the best NBA player ever: " << endl;
	getline(cin, goat);
	cout << "GOAT: " << goat;
}


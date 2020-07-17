// include the input / output library
#include <iostream>

//add namespace std
using namespace std;

// int main is used to being the program
int main(){
	//create 5 variables without assigning them
	string branch;
	int number;
	double pi;
	char yes;
	bool onoff;

	//print out all the items
	cout << branch << " "<< number << " " << pi << " " << yes << " " << onoff << endl;

	//give all the types a value
	branch = "USMC";
	number = 620;
	pi = 3.14159;
	yes = 'y';
	onoff = true;

	//print out the value of each type
	cout << branch << " "<< number << " " << pi << " " << yes << " " << onoff << endl;

	//create new variables based off existing variables
	string laughableBranch = "Navy";
	string laughablebranch = "Chair Force";
	int newNumber = number + 100;
	double notPi = pi / 2;

	//print out all new inputs
	cout << "Is the " << laughableBranch << " a legit branch?" << endl;
	cout << "Is the " << laughablebranch << " a legit branch?" << endl;
	cout << "New number:" << newNumber << endl;
	cout << "Pi divided by is: " << notPi << endl;


	//returning the value of 0 to the end of the program
	return 0;
}

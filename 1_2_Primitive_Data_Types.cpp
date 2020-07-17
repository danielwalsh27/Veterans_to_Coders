//include the input /output library
#include <iostream>

//add namespace std
using namespace std;

//int main is used to begin the program
int main(){
	//create 5 variables
	string branch;
	int number;
	double pi;
	char yes;
	bool onOff;

	//print out all 5 vars
	cout << branch << " " << number << " " << pi << " " << yes << " " << onOff << endl;

	//give all the types a value
	branch = "USMC";
	number = 620;
	pi = 3.14159;
	yes = 'y';
	onOff = true;

	//print out the value of each
	cout << branch << " " << number << " " << pi << " " << yes << " " << onOff << endl;

	//create new variables based on existing variables
	string laughableBranch = "Navy";
	string laughablebranch = "Chair Force";
	int newNumber = number + 100;
	double notPi = pi / 2;

	//print out all new inputs
	cout << "Is the " << laughableBranch << " a legit branch?" << endl;
	cout << "Is the " << laughablebranch << " a legit branch?" << endl;
	cout << "New Number: " << newNumber << endl;
	cout << "Pi divided by 2 is: " << notPi << endl;

	//return the value of 0 to end the program
	return 0;
}

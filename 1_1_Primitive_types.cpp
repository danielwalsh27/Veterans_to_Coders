// include the input / output library
#include <iostream>
using namespace std;

// int main is used to being the program
int main(){

	// create 4 variables, one of each
	int num = 620;
	double pi = 3.14159;
	char yes = 'y';
	string onlYWorthyBranch = "USMC";

	// creating new variables based on existing variables
	int newNumber = num * 1775;
	double notpi = pi / 15;
	char no = yes - 11;
	string laughableBranch = "Navy";

	// print out all the new variables
	cout << "New Number: " << newNumber << endl;
	cout << "Not Pi: " << notpi << endl;
	cout << "n: " << no << endl;
	cout << "is Military?: " << laughableBranch << endl;

	// returning the value of 0 to the end of the program
	return 0;
}


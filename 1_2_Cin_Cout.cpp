// include libraries
#include <iostream>
using namespace std;

// int main is used to being the program
int main(){

	// create variables
	int num = 620;
	int userInputNum;
	double percent = 100.0;
	double userInputDou;
	string joke;

	//
	cout << "Add a number to my existing number. Enter now: " << endl;
	cin >> userInputNum;
	userInputNum = userInputNum + num;
	cout << "The new number is: " << userInputNum << "." << endl;

	//
	cout << "Give us a number and we'll divide it by 100. Enter now: " << endl;
	cin >> userInputDou;
	userInputDou = userInputDou / percent;
	cout << "The awesome number is: " << userInputDou << "." << endl;

	//
	cout << "Tell me a joke, GO! " << endl;
	cin.ignore();
	getline(cin,joke);
	cout << "Heres an original joke: " << joke << "." << endl;

	// returning the value of 0 to the end of the program
	return 0;
}

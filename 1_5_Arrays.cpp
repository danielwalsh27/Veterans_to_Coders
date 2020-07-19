// include the input output library
#include <iostream>
using namespace std;

//int main is used to begin the program
int main(){
	//create an array of fixed size
	string arrayBranches[16000];
	int indexToOverwrite = 0;

	//ask user to populate the array
	cout << "Enter each branch of the military. Press enter after each submission" << endl;
	getline(cin,arrayBranches[0]);
	getline(cin,arrayBranches[1]);
	getline(cin,arrayBranches[2]);
	getline(cin,arrayBranches[3]);
	getline(cin,arrayBranches[4]);
	getline(cin,arrayBranches[5]);

	//print out all the values in array
	cout << "\nThe first branch you listed was: " << arrayBranches[0] << "." << endl;
	cout << "The second branch you listed was: " << arrayBranches[1] << "." << endl;
	cout << "The third branch you listed was: " << arrayBranches[2] << "." << endl;
	cout << "The fourth branch you listed was: " << arrayBranches[3] << "." << endl;
	cout << "The fifth branch you listed was: " << arrayBranches[4] << "." << endl;
	cout << "The sixth branch you listed was: " << arrayBranches[5] << "." << endl;

	//which index do you want to overwrite?
	cout << "\nWhich index to overwrite?" << endl;
	cin >> indexToOverwrite;

	//overwrite an array index
	arrayBranches[indexToOverwrite] = "This was overwritten";

	//print out new array variable
	cout << arrayBranches[indexToOverwrite] << endl;

	//return the value of 0 to end the program
	return 0;
}





//include input output library
#include <iostream>
using namespace std;

//int main is used to beign the program
int main(){
	//create variables
	int userInput = 0;
	int myFavNum = 620;

	//ask user to guess my favorite number
	while(userInput != myFavNum){
		cout << "Guess my favorite number!! GO!" << endl;
		cin >> userInput;

		//check if the number inputed is too high, low or just right
		if(userInput > myFavNum)
			cout << "Too High, Try Again!!!!!!!" << endl;
		else if(userInput < myFavNum)
			cout << "Too Low, Try Again!!!!!!!" << endl;
		else
			cout << "Correct!!!! You guess correctly!!!!" << endl;
	}

	//cin -> getline, clear the buffer
	cin.ignore();

	//create more variables
	int numOfDogNames = 10;
	string dogNames[numOfDogNames];

	//populate an array of dog names
	for(int i = 0; i < numOfDogNames; i++){
		cout << "Enter dog name for index " << i << "." << endl;
		getline(cin, dogNames[i]);
	}

	//print the dog names in the array
	for(int i = 0; i < numOfDogNames; i++)
		cout << "Index " << i << " holds the dog name of: "<< dogNames[i] << endl;

	//return the value of 0 to end the program
	return 0;
}




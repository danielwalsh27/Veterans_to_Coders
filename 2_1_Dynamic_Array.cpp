//include libraries
#include <iostream>
using namespace std;

int main(){
	//create static array of 3 million
	//int array[3000000];

	//create a static variable
	int sizeOfArray;

	//ask user for inputs size
	cout << "Enter the size:" << endl;
	cin >> sizeOfArray;

	//create dynamic array of user specified size
	int * dymArray = new int[sizeOfArray];

	//load array
	for(int i = 0; i < sizeOfArray; i++){
		dymArray[i] = i * i;
	}

	//print array
	for(int i = 0; i < sizeOfArray; i++){
		cout << dymArray[i] << " ";
	}

	//delete pointer
	delete dymArray;

	//return an int
	return 0;
}


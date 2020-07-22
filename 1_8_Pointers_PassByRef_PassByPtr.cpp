//include the input output library
#include <iostream>
using namespace std;

//functions for pass by pointer
int add(int variable1, int *ptr){
	return variable1 + *ptr;
}
int mult(int variable1, int *ptr){
	return variable1 * *ptr;
}

//functions for pass by reference
void refAddOne(int &var1){
	var1 = var1 + 1;
}
void refTimesFive(int &var1){
	var1 = var1 * 5;
}
void refSquared(int &var1){
	var1 = var1 * var1;
}

//int main s used to begin the program
int main(){
	//create  variable
	int var1;

	//grab input from user
	cout << "Enter Variable:" << endl;
	cin >> var1;

	//assign pointer to variable
	int * pointer = &var1;

	//display the variable to the user
	cout << pointer << endl; // address
	cout << *pointer << endl;

	//Function call for pointer
	cout << add(var1, pointer) << endl;
	cout << mult(var1, pointer) << endl;

	cout << "\nVar1 before the reference calls: " << var1 << endl;

	//Function call for ref
	refAddOne(var1);
	refTimesFive(var1);
	refSquared(var1);

	cout << "\nVar1 after the reference calls: " << var1 << endl;

	//return the value of 0 to end the program
	return 0;
}

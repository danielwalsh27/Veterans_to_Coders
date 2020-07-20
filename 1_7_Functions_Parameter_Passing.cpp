//include the input output library
#include <iostream>
using namespace std;

// function prototypes
// pass by value
int add(int firstNum, int secondNum);
int subtract(int firstNum, int secondNum);
int multiply(int firstNum, int secondNum);
void printAdd(int firstNum, int secondNum);
void printSubtract(int firstNum, int secondNum);
void printMultiply(int firstNum, int secondNum);

//int main is used to begin the program
int main(){
	//create 2 integers variables,
	int num1, num2;

	//ask user to input two variables
	cout << "Please enter 2 numbers, separate by a space: " << endl;
	cin >> num1 >> num2;

	//this will call the function and the functions will return the value
	cout << "Using the return type within the cout statement!" << endl;
	cout << "When we add the numbers we get " << add(num1, num2) << endl;
	cout << "When we subtract the numbers we get " << subtract(num1, num2) << endl;
	cout << "When we multiply the numbers we get " << multiply(num1, num2) << endl;

	//these functions will be called, then execute all the code within the function
	cout << "\nUsing the void return type, so these function will print and result!" << endl;
	printAdd(num1, num2);
	printSubtract(num1, num2);
	printMultiply(num1, num2);

	//return the value of 0 to end the program
	return 0;
}

//function definitions
int add(int firstNum, int secondNum){
	return firstNum + secondNum;
}
int subtract(int firstNum, int secondNum){
	return firstNum - secondNum;
}
int multiply(int firstNum, int secondNum){
	return firstNum * secondNum;
}
void printAdd(int firstNum, int secondNum){
	cout << "These numbers added up are " << firstNum + secondNum << endl;
}
void printSubtract(int firstNum, int secondNum){
	cout << "These numbers subtracted are " << firstNum - secondNum << endl;
}
void printMultiply(int firstNum, int secondNum){
	cout << "These numbers multiplied are " << firstNum * secondNum << endl;
}

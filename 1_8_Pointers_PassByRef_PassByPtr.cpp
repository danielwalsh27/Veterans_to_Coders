//include the input output library
#include <iostream>
using namespace std;

//pass by pointer and pass by reference
int add(int firstVar, int *varPoint){
	cout << "\nNow we have passed the variable and pointer through the add function" << endl;
	cout << "Dereferencing the pointer "<<firstVar<<" + "<<*varPoint<<" = "<< firstVar+*varPoint<<endl;
	return firstVar + *varPoint;
}
int mult(int firstVar, int *varPoint){
	cout << "\nNow we have passed the variable and pointer through the add function" << endl;
	cout << "Dereferencing the pointer "<<firstVar<<" * "<<*varPoint<<" = "<< firstVar**varPoint<<endl;
	return firstVar * *varPoint;
}
void RefAddOne(int &value){
	cout << "We passed by reference to the RefAddOne function." << endl;
	value = value + 1;
}
void RefTimesFive(int &value){
	cout << "We passed by reference to the RefTimesFive function." << endl;
	value = value * 5;
}
void RefSquare(int &value){
	cout << "We passed by reference to the RefSquare function." << endl;
	value = value * value;
}

//int main is used to begin the program
int main(){
	//create two variables, one int and an int pointer
	int var1;
	int *point;

	cout << "Enter an integer: ";
	cin >> var1;

	//this is not a traditional assignment, your telling the pointer where to point to (address of var1)
	point = &var1;

	//this will display the memory address of the pointer
	cout << point << endl;
	cout << &var1 << endl;

	//by adding the * in front of the pointer we are dereferencing the pointer, displaying var1
	cout << *point<< endl;
	cout << var1 << endl; //&var1 for memory address

	//function call to the pointer functions we created
	cout << add(var1,point) << endl; //cannot be passed by * (deref of) or & (address of)
	cout << mult(var1,point) << endl;

	cout << "\nNumber BEFORE the reference calls: " << var1 << endl;

	//function calls to the reference functions we created
	RefAddOne(var1);
	cout << "Now the int is " << var1 << "\n" << endl;
	RefTimesFive(var1);
	cout << "Now the int is " << var1 << "\n" << endl;
	RefSquare(var1);
	cout << "Now the int is " << var1 << "\n" << endl;

	cout << "Number AFTER the reference calls: " << var1 << endl;

	//return the value of 0 to end the program
	return 0;
}



//include the header file
#include "header.h"

//in main, create student object and call all functions in order.
int main(){
  //create student object, and call member functions
	Student dude("Dude", "Duder", 888999333, "dudeManBro@student.edu", "Computer Science");
	dude.loadPartial();
	dude.printData();

	return 0;
}


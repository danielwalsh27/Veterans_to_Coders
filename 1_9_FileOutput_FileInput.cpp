//include the input output library
#include <iostream>
#include <fstream>
using namespace std;

//int main is used to begin the program
int main(){
	//output stream - used to write to file
	ofstream fout;
	fout.open("ifThisFileDoesntExistItWillCreateIt.txt");
	fout << "This is the first line in the txt file" << endl;
	fout << "This is the second line" << endl;
	fout << "third line" << endl;

	//when we are done writing to the file we must close the file
	fout.close();

	//create an array to store the items we read from the file
	string linesInFile[10];

	//input stream - used to read from file
	ifstream fin;
	fin.open("ifThisFileDoesntExistItWillCreateIt.txt");
	int i = 0;

	//read items from file and store into an array
	while(!fin.eof()){
		getline(fin, linesInFile[i++]);
		i++;
	}
	//when we are done writing to the file we must close the file
	fin.close();

	//print out all the contents of the array
	for(int i = 0; i < 10; i++){
		cout << i << ": " << linesInFile[i] << endl;
	}

	//return the value of 0 to end the program
	return 0;
}



//include input output library
//include fstream library
#include <iostream>
#include <fstream>
using namespace std;

//int main is used to being the program
int main(){
	//create output stream, write to file
	ofstream fout;
	fout.open("ifThisFileDoesntExistWeWillCreateIt.txt");

	//write to file
	fout << "This is the first line within the file " << endl;
	fout << "This is the second line" << endl;
	fout << "Larry Bird is WAAAAAAY better than LeBron James, but we all already knew that" << endl;
	fout << "The Marines are the only legitimate branch" << endl;

	//close the file
	fout.close();

	//create a string array
	string linesInFile[10];

	//create input stream, read the file
	ifstream fin;
	fin.open("ifThisFileDoesntExistWeWillCreateIt.txt");

	//use while loop to read the file and store in array
	int i = 0;
	while(!fin.eof()){
		getline(fin, linesInFile[i]);
		i++;
	}

	//close file
	fin.close();

	//print out all contents of array
	for( i = 0; i < 10; i++){
		cout << i << ": " << linesInFile[i] << endl;
	}

	//return the value of 0 to the user
	return 0;
}


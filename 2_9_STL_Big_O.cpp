//include libraries
#include <iostream>
using namespace std;

//include STL Data Structures
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

//int main
int main(){
	//create each DS
	array<int,100> myArray;

	//load array
	for(int i = 0; i < 25; i++){
		myArray[i] = i + 12;
	}

	//print array
	//O(n)
	for(int i = 0; i < myArray.size(); i++){
		cout << "Index " << i << ": " << myArray[i] << endl;
	}

	//see array functionality
	cout << myArray.front() << endl;
	cout << myArray.max_size() << endl;
	cout << myArray.size() << endl;

	//return int
	return 0;
}

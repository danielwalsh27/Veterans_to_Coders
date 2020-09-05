//include libraries
#include <iostream>
using namespace std;

//create address class
class Address{

//private data members
private:
	int number, zip;
	string street, city, state;

//public data functions
public:
	//default constructor
	Address(){
		number = 0, zip = 0;
		street = "", city = "", state = "";
	}
	//parameterized constructor
	Address(int n, string s, string c, string st, int z){
		number = n, zip = z; street = s, city = c, state = st;
	}
	void print(){
		cout << number << " " << street << ", " << city << ", " << state << ". " << zip << endl;
	}

	//setters
	void setNum(int n) { number = n; }
	void setZip(int z) { zip = z; }
	void setStreet(string s) { street = s; }
	void setCity(string c) { city = c; }
	void setState(string st) { state = st; }

	//getters
	int getNum(){ return number; }
	int getZip(){ return zip; }
	string getStreet(){ return street; }
	string getCity(){ return city; }
	string getState(){ return state; }
};

int main(){
	//create default house, print it
	Address myHouse;
	myHouse.print();

	//create a parameterize house, print it
	Address place(100, "Main St", "Brea", "Ca", 92821);
	place.print();

	//use setters
	myHouse.setNum(400);
	myHouse.setStreet("Elm St");
	myHouse.setCity("San Clemente");
	myHouse.setState("Ca");
	myHouse.print();

	//return int
	return 0;
}

//include libraries
#include <iostream>
using namespace std;

//address class
class Address{

	//Access Specifier - Private
private:

	//Member variables
	int number, zip;
	string street, city, state;

	//Access Specifier - Public
public:

	//Member Functions
	void loadData(){
		cout << "Enter street name:"; getline(cin,street);
		cout << "Enter house number:"; cin >> number; cin.ignore();
		cout << "Enter city:"; getline(cin,city);
		cout << "Enter state;"; getline(cin,state);
		cout << "Enter zip:"; cin >> zip; cin.ignore();
	}
	void printAddy(){
		cout << number << " " << street << " " << city << ", " << state << ". " << zip << endl;
	}
};

//int main
int main(){
	//create a student obj
	Address addy;

	//call obj functions
	addy.loadData();
	addy.printAddy();

	//return int
	return 0;
}


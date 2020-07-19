//include the input output library
#include <iostream>
using namespace std;

//int main is used to being the program
int main(){
	//create variables
	int age = 0;
	string isGoodTeam = "";
	bool codeIsFun = true;

	//ask user for their age
	cout << "How old are you?" << endl;
	cin >> age;

	//check if the user is old
	if(age >= 2){
		cout << "You're really old!!!" << endl;
	}
	else{
		cout << "You're still pretty young, Keep killin it!!" << endl;
	}

	//clear the buffer
	cin.ignore();

	//ask user if this team is good
	cout << "Are the Raiders a good football team?" << endl;
	getline(cin,isGoodTeam);

	if(age >= 2 && (isGoodTeam == "No" || isGoodTeam == "no")){
		cout << "You're old and wise!!" << endl;
	}
	else{
		cout << "You're just plain dumb!" << endl;
	}

	//is coding fun?
	if(! codeIsFun){
		cout << "Yikes, sorry! Keep at it!" << endl;
	}
	else{
		cout << "Awesome, go check out glassdoor to find work! " << endl;
	}

	//return the value of 0 to end the program
	return 0;
}





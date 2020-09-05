//include libraries
#include <iostream>
using namespace std;

//Person is the Base class
//other classes will take Person as their base class
class Person{
private:
	int height, weight, age;
public:
	Person() { height = 0, weight = 0, age = 0; }		//default constructor
	Person(int hei, int wei, int ag)					//parameterized constructor
	:height(hei), weight(wei), age(ag){}				//initializer list
	int getHei() const 	 	{ return height;}			//getters
	int getWei() const	 	{ return weight;}
	int getAge() const 	 	{ return age;}
	void setHei(int hei) 	{ height = hei;}			//setters
	void setWei(int wei) 	{ weight = wei;}
	void setAge(int ag) 	{ age = ag;}
};

//Employee is the Derived class of Person
//Publicly inheriting Person
class Employee : public Person{
private:		//this only has two member variable but inherits height weight and age from person
	int empNum;
	string department;
// This Class inherits the following variables from Person Class:
	//int height, weight, age;

public:
	Employee() { Person(), empNum = 0, department = "";	} 	//calls Person default constructor
	Employee(int hei, int wei, int ag, int empN, string dep)//initializes through Person parameterized constructor
	:Person(hei, wei, ag), empNum(empN), department(dep){}	//initializer list

// This Class inherits the following functions from Person Class:
	//int getHei() const 	 	{ return height;}
	//int getWei() const	 	{ return weight;}
	//int getAge() const 	 	{ return age;}
	//void setHei(int hei) 		{ height = hei;}
	//void setWei(int wei) 		{ weight = wei;}
	//void setAge(int ag) 		{ age = ag;}
	int getNum() const  		{ return empNum;}			//getters
	string getDep() const 	{ return department;}
	void setNum(int eNum) 	{ empNum = eNum;}				//setters
	void setDep(string dep) 	{ department = dep;}
};

//Student is the Derived class of Person
//Publicly inheriting Person
class Student : public Person{
private:
	int CWID;
	string major;
// This Class inherits the following functions from Person Class:
	//int height, weight, age;

public:
	Student() { Person(), CWID = 0, major = ""; }			//calls Person default constructor
	Student(int hei, int wei, int ag, int cwid, string maj)	//initializes through Person parameterized constructor
	:Person(hei, wei, ag), CWID(cwid), major(maj){}			//initializer list

// This Class inherits the following functions from Person Class:
	//int getHei() const 	 	{ return height;}
	//int getWei() const	 	{ return weight;}
	//int getAge() const 	 	{ return age;}
	//void setHei(int hei) 		{ height = hei;}
	//void setWei(int wei) 		{ weight = wei;}
	//void setAge(int ag) 		{ age = ag;}
	int getCWID() const		{ return CWID;}					//getters
	string getMaj() const 	{ return major;}
	void setCWID(int cwid) 	{ CWID = cwid;}					//setters
	void setMaj(string maj) 	{ major = maj;}
};

//int main
int main(){
	//create a person class
	Person me(71, 200, 100);
	Employee you(60,100,50,23456789, "IT");
	Student them(70,150,30,34567,"Bizzzzznesss");
	cout << me.getAge() << endl;
	cout << you.getHei() << endl;
	cout << them.getWei() << endl;

	return 0;
}

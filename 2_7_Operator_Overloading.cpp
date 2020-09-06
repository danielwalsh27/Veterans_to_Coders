#include <iostream>
#include <fstream>
using namespace std;

//Land Object that has length and width for the size of the Plot of Land
class Land{
private:
	float length, width;
public:
	Land()					{length = 0, width = 0;}
	Land(float l, float w) 	{length = l, width = w;}
	void setLen(float l) 	{length = l;}
	void setWid(float w) 	{width = w;}
	float getlen()			{return length;}
	float getwid()			{return width;}

	//this operator is the insertion operator, we will tell it how to print the items
	friend ostream & operator <<(ostream& out, const Land& obj){
		out << "Length: " << obj.length << endl;
		out << "Width: " << obj.width << endl;
		return out;
	}

	//this operator adds two objects together, it will create a temp object
	//then it will add the lengh of that obj with the object being passed in
	Land operator +(Land &obj){
		//the obj being passed in is he second operand
		// C = A + B; ... A is the class called on, B is the Obj being passed in
		// B = (Land &obj)

		Land plot;
		plot.length = length + obj.length;
		plot.width = width + obj.width;
		return plot;
	}
	Land operator -(Land &obj){
		//the obj being passed in is he second operand
		// C = A - B; ... A is the class called on, B is the Obj being passed in
		// B = (Land &obj)

		Land plot;
		plot.length = length - obj.length;
		plot.width = width - obj.width;
		return plot;
	}
	Land operator *(Land &obj){
		Land plot;
		plot.length = length * obj.length;
		plot.width = width * obj.width;
		return plot;

	}
	Land operator /(Land &obj){
		Land plot;
		plot.length = length / obj.length;
		plot.width = width / obj.width;
		return plot;
	}
};

int main(){
	//create 4 ints, 2 lengths and 2 widths
	int L1, L2, W1, W2;

	//ask user to load 2 lengths and 2 widths
	cout << "Enter Len and Wid for obj 1: ";
	cin >> L1 >> W1;
	cout << "Enter Len and Wid for obj 2: ";
	cin >> L2 >> W2;

	//create 2 objects with those 2 inputs, use the constructor
	Land A(L1, W1);
	Land B(L2, W2);

	//A + B then print it
	Land C = A + B;
	cout << C << endl;

	//A - B then print it
	C = A - B;
	cout << C << endl;

	//A * B then print it
	C = A * B;
	cout << C << endl;

	//A / B then print it
	C = A / B;
	cout << C << endl;

	return 0;
}

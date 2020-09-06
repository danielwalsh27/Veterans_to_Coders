//include libraries
#include <iostream>
using namespace std;

//recursive palindrome function
int makePalindrome(int number){
	if (number == 0) return 0;
	cout << "number before: " << number << endl;
	makePalindrome(number - 1);
	cout << "number after_: " << number << endl;

}

//recursive adding function
int addAllPrev(int number){
  if(number == 1)
    return 1;
  else
    return number + addAllPrev(number - 1);
}

//recursive mult function
int multAllPrev(int number){
  if(number == 1)
    return 1;
  else
    return number * multAllPrev(number - 1);
}

//int main
int main(){
	//print recursive add funct
	cout << addAllPrev(5) << endl;

	//print recursive mult funct
	cout << multAllPrev(6) << endl;

	//call recursive palindrome funct
	makePalindrome(5);

	//return int
	return 0;
}



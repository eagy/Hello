//============================================================================
// Name        : Hello.cpp
// Author      : Daniel Eagy
// Version     :
// Copyright   : (c) 2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Human {
public:
	Human();
	Human(string theName, int theAge);


	void setName(string theName);
	void setAge(int theAge);

	string getname();
	string getAge();
private:
	string name;
	int age;
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int i;

	cin >> i;

	int b = 1/i;

	while (true) {
		int foo = 1;
	}

	volatile int b = 5;
	return 0;
}

void Human::setName(string theName) {

}

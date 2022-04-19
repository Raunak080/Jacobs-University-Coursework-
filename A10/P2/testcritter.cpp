/*
CH-230-A
a10_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	int age;
	double height;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	
	getline(cin, name);
	c.setName(name);

	cout<< "Age: ";
	cin >>age;
	c.setAge(age);

	cout<< "Height: ";
	cin>> height;
	c.setHeight(height);


	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
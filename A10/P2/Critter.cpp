/*
CH-230-A
a10_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(int newage){
    age=newage;
}


void Critter::setHeight(double newheight){
    height=newheight;
}




void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." ;
    cout<< "I am "<< age << "years old .";
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getAge(){
    return age;
}

double Critter::getHeight(){
    return height;
}
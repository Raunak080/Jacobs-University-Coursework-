/*
CH-230-A
a10_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include<iostream>
#include<string>
#include"Critter.h"

using namespace std;

//defining methods 
Critter::Critter()
{
    name = "default_name";
    height = 5;
    hunger = 0;
    boredom = 0;
    thirst = hunger;
    cout << "Default Constructor" << endl;
}
Critter::Critter(std::string newname)
{
    name = newname;
    height = 5;
    hunger = 0;
    boredom = 0;
    thirst = hunger;
    cout << "Constructor with name" << endl;
}

//critter with all the provided argument but without thirst.
Critter::Critter(std::string newName, int hu, int b, float h)
{
    name = newName;
    hunger = hu;
    boredom = b;
    height = h;
    thirst = hunger;
    cout << "Constructor with all the arguments" << endl;
}

//critter with all the provided arguments including thirst
Critter::Critter(std::string newName, int hu, int b, float h, double t)
{
    name = newName;
    hunger = hu;
    boredom = b;
    height = h;
    thirst = t;
    cout << "Constructor with all the arguments" << endl;
}

void Critter::print()
{
    cout << "Name: " << name << "\nHeight: " << height << "\nHunger: " 
         << hunger << "\nBoredom: " << boredom << "\nThirst: " 
         << thirst << endl;
}
/*
CH-230-A
a10_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include<iostream>
#include<string>
#include"City.h"

using namespace std;

//Setters
void City::setName(string newname)
{
    name = newname;
}

void City::setNumofinhab(int newnumofinhab)
{
    numofinhab = newnumofinhab;
}

void City::setMayor(string& newmayor)
{
    mayor = newmayor;
}

void City::setArea(double newarea)
{
    area = newarea;
}

//print method
void City::print()
{
    cout << "Name of City: " << name << "\n";
    cout << "Number of Inhabitants: " << numofinhab << "\n";
    cout << "Mayor: " << mayor << "\n";
    cout << "Area: " << area << " square km" << "\n";
}

//getters
int City::getNumofinhab()
{
    return numofinhab;
}

double City::getArea()
{
    return area;
}
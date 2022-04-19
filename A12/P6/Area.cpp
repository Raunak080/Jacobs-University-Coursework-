/*CH-230-A
a12_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

//Declaring default constructor for Area
Area::Area(const char *n)
{
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

//Declaring destructor for Area
Area::~Area()
{
}

//colour method for Area class
void Area::getColor() const
{
	cout << "\n"
		 << color << ": ";
}
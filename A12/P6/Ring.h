/*CH-230-A
a12_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

//declaring the Ring class
class Ring : public Circle
{
	//public properties of the Ring class
public:
	Ring(const char *n, double outer, double inner);
	~Ring();
	double calcArea() const;
	double  calcPerimeter() const;

//private properties of the Ring class
private:
	double innerradius;
};

#endif
/*
CH-230-A
a10_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	
	std::string name;
	int hunger;
	int boredom;
	double height;
	int age;
	int health;



public: // business logic methods are public
	
	// setter 
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(int newage);
	void setHeight(double newheight);
	
	// getter 
	int getAge();
	int getHunger();
	double getHeight();
	
	// service 
	void print();
};
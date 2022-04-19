/*
CH-230-A
a10_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <string>

class Critter {

private:  // internal implementation is hidden
	std::string name;
    float height;
    int hunger;
    int boredom;

public: //public methods of a Critter
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10); //default height set to 10

    //setter
    void sethunger(int hunger);

	void print();              // prints it to the screen
};
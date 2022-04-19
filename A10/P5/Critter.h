/*
CH-230-A
a10_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <string>

class Critter {

private:  // internal implementation is hidden
	std::string name;
    float height;
    int boredom;
    double hunger;
    //double hungerd (int hunger);
    //int backtointegers(double hunger);

public:
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10);
    void sethunger(int newhunger);

	void print();              // prints it to the screen
};
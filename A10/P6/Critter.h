/*
CH-230-A
a10_p6
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
    double thirst;

public:
	Critter ();                 
	Critter (std::string); 
    Critter (std::string, int, int, float=10); //setting default height to 10
    Critter (std::string, int, int, float, double);
    void sethunger(float hunger);
    void setthirst(double thirst);

	void print();             
};
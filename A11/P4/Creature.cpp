/*CH-230-A
a11_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

//empty constructor for the class creature
Creature::Creature() : distance(10)
{
    cout << "Constructor for Creature is created.\n";
}

//destructor for the class creature
Creature::~Creature()
{
    cout << "Empty Destructor for Creature being called.\n";
}

//declaring a method run for class creature
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

//empty constructor for the class wizard
Wizard::Wizard() : distFactor(3)
{
    cout << "Constructor for Wizard is created.\n";
}

//destructor for class wizard
Wizard::~Wizard()
{
    cout << "Empty Destructor for wizard being called.\n";
}

//declaring a method hover for derived class wizard
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//empty constructor for the class birds
Birds::Birds() : flignt_num(10000)
{
    cout << "Constructor for Birds is created.\n";
}

//destructor for the class birds
Birds::~Birds()
{
    cout << "Empty Destructor for birds being called.\n";
}

//declaring a method for the derived class birds
void Birds::fly() const
{
    cout << "flying " << (flignt_num * distance / 1000) << " kilometers!\n";
}

//empty constructor for the class gypsy
Gypsy::Gypsy() : roam_dist(5000)
{
    cout << "Constructor for Gypsy is created.";
}

//declaring a method for the derived class gypsy
void Gypsy::roam() const
{
    cout << "roaming " << (roam_dist * distance / 1000) << " kilometers!\n";
}

//destructor for the class gypsy
Gypsy::~Gypsy()
{
    cout << "Empty Destructor for gypsy being called.\n"
         << endl;
}
/*
CH-230-A
a11_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <iostream>

using namespace std;

class Creature
{
public:
    Creature();
    void run() const;
    ~Creature();

protected:
    int distance;
};

Creature::Creature() : distance(10)
{
    cout << "Creature constructor is created.\n";
}

Creature::~Creature()
{
    cout << "Empty Destructor for Creature being called.\n";
}

void Creature::run() const
{
    cout << "running " << distance << " meters\n";
}

class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;
    ~Wizard();

private:
    int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor is created \n";
}

Wizard::~Wizard()
{
    cout << "Empty Destructor for wizard being called.\n";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Creating a birds class.
class Birds : public Creature
{
public:
    Birds();
    void fly() const;
    ~Birds();

private:
    int flignt_num;
};

//declaring property
Birds::Birds() : flignt_num(10000)
{
    cout << "Birds constructor\n";
}

Birds::~Birds()
{
    cout << "Empty Destructor for birds being called.\n";
}

//declaring methods
void Birds::fly() const
{
    cout << "flying " << (flignt_num * distance / 1000) << " kilometers!\n";
}

//gypsy class
class Gypsy : public Creature
{
private:
    int roam_dist;

public:
    Gypsy();
    void roam() const;
    ~Gypsy();
};

//declaring property for gypsy class
Gypsy::Gypsy() : roam_dist(5000)
{
    cout << "Gypsy constructor is created";
}

//declaring method for gypsy
void Gypsy::roam() const
{
    cout << "roaming " << (roam_dist * distance / 1000) << " kilometers!\n";
}

Gypsy::~Gypsy()
{
    cout << "Empty Destructor for gypsy being called.\n"
         << endl;
}

//main function
int main()
{
    //creature
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    // wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //birds
    cout << "\nCreating a Bird. \n";
    Birds b;
    b.run();
    b.fly();

    //gypsy
    cout << "\nCreating a Gypsy.\n";
    Gypsy g;
    g.run();
    g.roam();

    //wizard
    cout << "\nCreating an instance of wizard.\n";
    Wizard wi;
    wi.run();
    wi.hover();

    //birds
    cout << "\nCreating an instance of a Brid.\n";
    Birds bi;
    bi.run();
    bi.fly();

    //gypsy 
    cout << "\nCreating an instance of a Gypsy.\n";
    Gypsy gy;
    gy.run();
    gy.roam();

    return 0;
}
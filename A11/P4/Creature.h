/*CH-230-A
a11_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

//Creature class
class Creature
{
public:
	Creature(); 
	void run() const; //method for creature
	~Creature();

protected:
	int distance;
};

//creating the class wizard
class Wizard : public Creature
{
public:
	Wizard(); 
	void hover() const; //method for  Wizard
	~Wizard();

private:
	int distFactor;
};

//class birds
class Birds : public Creature
{
public:
	Birds(); 
	void fly() const;  //method for  birds
	~Birds();

private:
	int flignt_num;
};

//class gypsy
class Gypsy : public Creature
{
private:
	int roam_dist;

public:
	Gypsy(); 
	void roam() const; //method for  gypsy
	~Gypsy();
};
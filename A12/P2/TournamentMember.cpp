/*CH-230-A
a12_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std; 

/*
Default location for all class objects.
If setter is not used in test file, 
"Nowhere" would be printed as location for all.
*/

string TournamentMember::location = "Nowhere";

//Parametric Constructor.
TournamentMember::TournamentMember(const char* fn, const char* ln, 
                                   const char* date, int e, double s){
    
    strcpy(firstname, fn);
    strcpy(lastname, ln);
    strcpy(DOB, date);
    experience = e; 
    success = s;

	cout << "Parametric Constructor for TournamentMember class" << endl;

}


//Default Constructor.
TournamentMember::TournamentMember(){

	strcpy(firstname, "DEFAULT");
    strcpy(lastname, "DEFAULT");
    strcpy(DOB, "1970-01-01");
    experience = 0;
    success = 0.00;

	cout << "Default Constructor for TournamentMember class" << endl;

}


//Copy Constructor.
TournamentMember::TournamentMember(const TournamentMember& tm){

    strcpy(firstname, tm.firstname);
    strcpy(lastname, tm.lastname);
    strcpy(DOB, tm.DOB);
    experience = tm.experience; 
    success = tm.success;

    cout << "Copy Constructor for TournamentMember class" << endl;

}	


//Parent method used in later inherited classes.
void TournamentMember::printStats() const{

    cout << endl;

	cout << "First name: " << firstname << endl;
    cout << "Last name: " << lastname << endl;
    cout << "Date of Birth: " << DOB << endl;
    cout << "Location: " << location << endl;
     cout   << "Years of Experience: " << experience << endl ;
     cout<< "Win Rate: " << success << endl;

    cout << endl;

}


//Destructor.
TournamentMember::~TournamentMember(){

	cout << "Destructor for TournamentMember class" << endl;

}
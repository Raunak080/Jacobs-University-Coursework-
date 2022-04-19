/*CH-230-A
a12_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#ifndef __TOURNAMENTMEMBER_H
#define __TOURNAMENTMEMBER_H
#include <string>
#include <cstring>

using namespace std;

class TournamentMember{	

	private: 

    //Properties of tournament members
        char firstname[36];
        char lastname[36];
        char DOB[11];
        int experience;
        double success;
        static string location;

    public:

       //Constructors
        TournamentMember(const char*, const char*, const char*, int, double); 

		
		TournamentMember();					

		
		TournamentMember(const TournamentMember&);	

      
        void printStats() const;

		//setters.
        void setFirstname(const char* fn) {strcpy(firstname, fn);}
        void setLastname(char* ln) {strcpy(lastname, ln);}
        void setDob(char* d) {strcpy(DOB, d);}
        void setExperience(int e) {experience = e;}
        void setSuccess(double s) {success = s;}
        void setLocation(string sl) {location = sl;}

        // getters.
        string getFirstname() const {return firstname;}
        string getLastname() const {return lastname;}
        string getDob() const {return DOB;}
        int getExperience() const {return experience;}
        double getSuccess() const {return success;}

		//Destructor.
		~TournamentMember();

};

#endif
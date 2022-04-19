/*CH-230-A
a12_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include "TournamentMember.h"
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv){
    
    //To invoke the Default constructor.
    TournamentMember player, coach, referee;

    //Nine parametric constructors, 3 for each types of tournament members.
    TournamentMember player1("Rahul", "Shrest", "1998-06-09", 21, 0.87);
    TournamentMember player2("Raunak", "Babu", "2002-02-06", 12, 0.71);

    TournamentMember coach1("Ee", "Ff", "1986-03-11", 14, 0.97);
    TournamentMember coach2("Gg", "Hh", "1989-04-16", 9, 0.30);

    TournamentMember referee1("Ii", "Jj", "1992-05-21", 5, 0.84);
    TournamentMember referee2("Kk", "Ll", "1995-06-26", 8, 0.58);

    //Setting location to all the class objects.
    player.setLocation("Frankfurt");

    //Printers for their respective values.
    player.printStats();
    coach.printStats();
    referee.printStats();

    player1.printStats();
    player2.printStats();

    coach1.printStats();
    coach2.printStats();

    referee1.printStats();
    referee2.printStats();

    return 0;

}
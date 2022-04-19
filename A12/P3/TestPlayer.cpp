/*CH-230-A
a12_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include<iostream>
#include"TournamentMember.h"
#include<string>

using namespace std;

int main()
{
    cout << endl;
    //creating the instance for the Player
    Player P1("Raunak", "Shrestha", "1999-12-26", 
                      "BabusBlues", 5.8, 8, "Midfielder", 5, "Right Footed");
    Player P2("Rahul", "Shrestha", "1998-07-23", 
                      "BabusBlues", 6.2, 6, "Centre Back", 6, "Left Footed");
    Player P3("Alex", "Acharya", "2000-05-14", 
                      "NepaliHaru", 5.7, 10, "Forward", 4, "Right Footed");

    /*prints out for three players before changing location +goal count*/
    cout << "Data of three players :" << endl;
    cout << "=====================" << endl;
    P1.print();  //output of data for player 1
    cout << endl;
    P2.print();  //output of data for player 1
    cout << endl;
    P3.print();  //output of data for player 1
    cout << endl;

    /*printing the output for three players after changing the location
    and goal count*/
    cout << "After changing location and the goal count:" << endl;
    cout << "====================" << endl;
    P1.increase_goal(1); //increasing goal count by 1
    P1.setLocation("Amsterdam"); //changing location to Amsterdam from bremen
    P1.getLocation();
    P1.print(); //printing the data after changing goalcount and location
    cout << "Team Location for player 1 is changed" << endl;
    cout << endl;

    P2.increase_goal(2); //increasing goal count by 2
    P2.setLocation("Amsterdam"); //changing location to Amsterdam from bremen
    P2.getLocation();
    P2.print(); //printing the data after changing goalcount and location
    cout << "Team Location for player 2 is changed" << endl;
    cout << endl;

    P3.increase_goal(3); //increasing goal count by 3
    P3.setLocation("Amsterdam"); //changing location to Amsterdam from bremen
    P3.getLocation();
    P3.print(); //printing the data after changing goalcount and location
    cout << "Team Location for player 3 is changed" << endl;
    cout << endl;

    return 0;
}
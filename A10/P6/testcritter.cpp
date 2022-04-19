/*
CH-230-A
a10_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/



#include<iostream>
#include"Critter.h"

using namespace std;

int main()
{
    //for instance c1:
    Critter c1;
    c1.print();
    cout << "\n";

    //for instance c2:
    Critter c2("Raunak");
    c2.print();
    cout << "\n";

    //for instance c3:
    Critter c3("Raunak", 8, 9, 5.5);
    c3.print();
    cout << "\n";

    //for instance c4:
    Critter c4("Raunak", 8, 9);
    c4.print();
    cout << "\n";

    //for instance c5:
    Critter c5("Raunak", 8, 9, 5.5, 5);
    c5.print();
    cout << "\n";
    
    return 0;
}
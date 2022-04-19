/*
CH-230-A
a10_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/



#include <iostream>
#include <cstdlib>
#include <string>
#include "City.h"

using namespace std;



int main(int argc, char** argv)
{
//For Instance Bremen of the class City.
    City Bremen;
   
    cout << "For Bremen\n";
    cout << "Name of City: ";
    string name1;
    cin >> name1;
    Bremen.setName(name1);

    cout << "Number of inhabitants: ";
    int numbofinhab1;
    cin >> numbofinhab1;
    Bremen.setNumofinhab(numbofinhab1);
    getchar();

    cout << "Mayor: ";
    string mayor1;
    getline(cin, mayor1);
    Bremen.setMayor(mayor1);

    cout << "Area: ";
    double area1;
    cin >> area1;
    Bremen.setArea(area1);
    //Bremen.print();
    cout << "\n";

//For Instance Paris of the class City.
    City Paris;

    cout << "For Paris \n";
    cout << "Name of City: ";
    string name2;
    cin >> name2;
    Paris.setName(name2);
    cout << "Number of inhabitants: ";
    int numbofinhab2;
    cin >> numbofinhab2;
    Paris.setNumofinhab(numbofinhab2);
    getchar();
    cout << "Mayor: ";
    string mayor2;
    getline(cin, mayor2);
    Paris.setMayor(mayor2);
    cout << "Area: ";
    double area2;
    cin >> area2;
    Paris.setArea(area2);
    cout << "\n";

//For Instance London of the class City.
    City London;
    
    cout << "For London \n";
    cout << "Name of City: ";
    string name3;
    cin >> name3;
    London.setName(name3);
    cout << "Number of inhabitants: ";
    int numbofinhab3;
    cin >> numbofinhab3;
    London.setNumofinhab(numbofinhab3);
    getchar();
    cout << "Mayor: ";
    string mayor3;
    getline(cin, mayor3);
    London.setMayor(mayor3);
    London.setMayor(mayor3);
    cout << "Area: ";
    double area3;
    cin >> area3;
    London.setArea(area3);
    cout << "\n";


    cout << "Outputs: \n";    
    Bremen.print();
    cout << "\n";
    Paris.print();
    cout << "\n";
    London.print();

    cout << "Done" << endl;
    return 0;
}
/*CH-230-A
a11_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

//main function
int main()
{
    
    string word;
   
    while (1)
    {
        cout << "\nEnter the word:\n";
        cin >> word;

        //quits program if:
        if (word == "quit") 
        {
            cout << "Exiting the program.\n";
            exit(1);
        }

        //if wizard is called:
        else if (word == "wizard")
        {
            cout << "Running a wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }

        //if object1 is called:
        else if (word == "object1")
        {
            cout << "Calling object1.\n";
            Birds *b;
            b = new Birds;
            b->run();
            b->fly();
            delete b;
        }

        //if object2 is called:
        else if (word == "object2")
        {
            cout << "Running a wizard.\n";
            Gypsy *g;
            g = new Gypsy;
            g->run();
            g->roam();
            delete g;
        }
    }

    return 0;
}
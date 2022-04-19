/*
CH-230-A
a9_p1
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    //taking string input 
    string c_name;
    cout << "Enter Country Name: ";

    //reads string
    getline (cin, c_name);

    //outputs country name
    cout << "Country Name: " << c_name << endl;
    return 0;
}
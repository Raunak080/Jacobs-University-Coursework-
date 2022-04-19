/*
CH-230-A
a10_p7
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include <cstring>  

using namespace std;

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
    cout << "Calling the string by reference";
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	
}

//replaces occurence of oldchar by newchar
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

//declaring  funcbyref function
void funcByRef(NaiveString &s){
    cout << "funcbyref() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	
	//calling func by ref.
    NaiveString b(a);
    b.print();
    cout << "About to call funcbyref()" << endl;
    funcByRef(b);
    b.print();
    return 0;
}
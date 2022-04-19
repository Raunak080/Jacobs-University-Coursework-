/*CH-230-A
a12_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

//defining the default constructor for fraction
Fraction::Fraction()
{
    num = 1;
    den = 1;
}

//defining the parameterized constructor for fraction
Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

//calculating the gcd of two fractions
int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    //int gcd;
	for(int i=1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i==0)
            tmp_gcd = i;
    }

    return tmp_gcd;
}

//calculating the LCM of two fractions
int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

//operator overloading for <<
ostream& operator << (ostream& out, Fraction& f)
{
    
    out << f.num << "/" << f.den;
    return out;
}

//operator overloading for >>
istream& operator >> (istream& in, Fraction& f)
{
    char s = '\0';
    while (s != '/')
    {
        cout << "Enter the fraction: " << endl;
        in >> f.num >> s >> f.den; 
        while (f.den == 0)
        {
            cout << "Re-enter Input" << endl;
            in >> f.num >> s >> f.den;
        }     
    }
    return in;
}

//operator overloading for *
Fraction Fraction :: operator*(Fraction & a)
{
    Fraction temp;
    temp.num = num * a.num;
    temp.den = den * a.den;
    return temp;
}

//operator overloading for /
Fraction Fraction :: operator/(Fraction & a)
{
    Fraction temp;
    temp.num = num * a.den;
    temp.den = den * a.num;
    return temp;
}

//operator overloading for +
Fraction Fraction :: operator+(Fraction & a)
{
    Fraction temp;
    temp.num = num*lcm(den, a.den)/den + a.num*lcm(den, a.den)/a.den;
    temp.den = lcm(den, a.den);  
    return temp;
}

//operator overloading for -
Fraction Fraction :: operator-(Fraction & a)
{
    Fraction temp;
    temp.num = num*lcm(den, a.den)/den - a.num*lcm(den, a.den)/a.den;
    temp.den = lcm(den, a.den);  
    return temp;
}

//operator overloading for =
Fraction & Fraction :: operator=(const Fraction & a)
{
    num = a.num;
    den = a.den;
    return *this;
}

//operator overloading for >
bool Fraction::operator>(Fraction &a)
{
    if ((float)num/den > (float)a.num/a.den)
    {
        return true;
        //cout << "First fraction is the smaller one." << endl;
    }
    else
    {
        return false;
    }
}

//operator overloading for <
bool Fraction::operator<(Fraction &a)
{
    if ((float)num/den < (float)a.num/a.den)
    {
        return true;
        //cout << "First fraction is the smaller one." << endl;
    }
    else
    {
        return false;
    }
}
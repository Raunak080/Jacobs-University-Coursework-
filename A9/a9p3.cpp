/*
CH-230-A
a9_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include<iostream>

using namespace std;

//function which returns n positive 
float absolute(float n) 
{                       
    if(n < 0)
    {
        n = -n;
    }
    else if(n > 0)
    {
        n = n;
    }
    return n;
}

//main function 
int main()
{
    float n;
    cin >> n;
    cout << "Absolute Value: " << absolute(n) << endl;
    return 0;
}


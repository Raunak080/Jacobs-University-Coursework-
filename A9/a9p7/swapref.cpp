/*
CH-230-A
a9_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <iostream>
using namespace std;


void swapping(int &num1,int &num2){                 // swap ints
     int temp;
     temp=num1;
     num1=num2;
     num2=temp;

}




void swapping(float &p1, float &p2){     // swap floats
     float temp1;
     temp1=p1;
     p1=p2;
     p2=temp1;
} 


void swapping(const char *&str1, const char *&str2)  // swap char pointers
{
    const char *temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
} 


//main function
int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;

    const char* str1 = "One";
    const char* str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

return 0;
}
/*
CH-230-A
a1_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/
   
#include <stdio.h>
int main() {
float result; /* The result of the division */
float a = 5;
float b = 13.5;
result = a / b;
printf("The result is %lf\n", result);
return 0;
}


//The values of a and b were stored as integers when they were given in decimal; putting them in float fixed this problem
//We should be using %lf rather than %d since we are printing a float value rather than a decimal value.

/*
CH-230-A
a1_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
int main(){
    char c='F';
    int c1= (int) c + 3;  //assigns ASCII value of F to c1
    char a= (char) c1;    //assigns ASCII character to c1 of three characters after F
    printf("The Ascii code of third character after c is %d\n",c1);
    printf("The Ascii character of third character after c is %c\n",a);


return 0;

}
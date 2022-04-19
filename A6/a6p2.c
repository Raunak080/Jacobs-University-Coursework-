/*
CH-230-A
a6_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#define lb(n) (n&1)==0?0:1


int main(){
    char c;
    scanf("%c",&c);
   // unsigned char bit=c;
    printf("The decimal representation is: %d\n",c);
    printf("The least significant bit is: %d\n",lb(c)) ;
}
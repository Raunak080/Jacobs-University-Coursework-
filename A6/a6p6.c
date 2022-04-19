/*
CH-230-A
a6_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

//Macro for decimal representation.
#define decR(char) printf("%d", (char))

//Using function to print binary representation
//Using bitwise operators.   
void conversion(unsigned char c){

    //128 is 10000000 in binary, bits of an uchar.
    int size = 128;  
    
    //Loop until the max size of uchar.
    for (int i = 0; i < (sizeof(unsigned char) * 8); i++){

        /*Represent directly but make sure mask movement is done
        when the char has correct value.*/
        printf("%d", !!(c & (size >> i))); 

    }

}

/*main function which intialized, scans unsigned
 integer and prints decimal,binary representation*/
int main(){

    
    unsigned char c1;
    scanf("%c", &c1);

   
    printf("The decimal representation is: ");
    decR(c1);
    printf("\n");

    
    printf("The binary representation is: ");
    conversion(c1);
    printf("\n");
 
    return 0;

}
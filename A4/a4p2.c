/*
CH-230-A
a4_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/



#include <stdio.h>
#include <string.h>
int main(){

    //establishing an array and reading its value
    char var[50];
    fgets(var,50,stdin);

    
     for (int i = 0; i < (strlen(var)-1) ; i++)
    {
        //checking if num is divisible by two
        if (i%2==0){

        //either prints the character with no space or with space
        printf("%c\n",var[i]);
        }
        else
        {
            printf(" %c\n",var[i]);
        } 
    }
    return 0;
}
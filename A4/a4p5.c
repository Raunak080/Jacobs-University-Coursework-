/*
CH-230-A
a4_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int count_consonants(char *c){
 int con;
 con=0;
 for (int i = 0; i < strlen(c); i++){
    //checks if word contains vowels
        if (*(c +i)=='a' || *(c +i)=='e' || *(c +i)=='i' ||
           *(c +i)=='o' || *(c +i)=='u' || *(c +i)=='A' ||
           *(c +i)=='E' || *(c +i)=='I' || *(c +i)=='O' ||
           *(c +i)=='U'){

           }
           //if not vowel, adds it as consonant
        else if((*(c +i)>='a'&& *(c +i)<='z') || (*(c +i)>='A'&& *(c +i)<='Z'))
        {
            con=con+1;
        }
    }
 return (con);   
}

int main(){
    int temp[100];
    char c[100];
    for (int i = 0; i < 100; i++)
    {
        fgets(c,sizeof(c),stdin);
        if (strlen(c) == 1){
        //stops if string is empty
            break;
        }        
        temp[i] =count_consonants(c);
        printf("Number of consonants=%d\n",temp[i]);
    } 
    return 0;
}
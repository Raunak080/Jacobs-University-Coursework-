/*
CH-230-A
a7_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>

//Function converts all chars to lowercase.
void allLow(char str1[]){

    
    for (int i = 0; str1[i]; i++){

        
        printf("%c", tolower(str1[i]));

    }

}


//Function converts all chars to uppercase.
void allHigh(char str2[]){

    
    for (int j = 0; str2[j]; j++){

    
        printf("%c", toupper(str2[j]));

    }

}


//Function converts lower to higher and higher to lower
void someLowsomeHigh(char str3[]){

    
    for (int k = 0; str3[k]; k++){

        if(islower(str3[k])){

            printf("%c", toupper(str3[k]));

        }

        

        else{

            printf("%c", tolower(str3[k]));

        }

    }

}

//main functin

int main(){

    char decide;

    char strArr[200];
    fgets(strArr, 200, stdin);

    while(1){
        
        
        scanf(" %c", &decide);

        //Ends program if 4 is inputted( 52 in Ascii).
        if(decide == 52){

            break;

        }

        /*Using ASCII values of chars and have the facevalue
        of the char and int the same.*/
        int facevalue = (int)decide - 48;

        //Using function pointers during the call step.
        void(*ptr[])(char strArr[]) = {allHigh, allLow, someLowsomeHigh};
        
        (*ptr[facevalue-1])(strArr);
    }

    return 0;

}
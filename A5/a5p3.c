/*
CH-230-A
a5_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int count_lower(char *str){

    int lcount=0;

//adds +1 to lcount if smaller alphabet is present 
        for(;*str!='\n'; str++){                       
            if (*str>='a' && *str<='z'){
                lcount++;

            }   
        }
    return lcount;
}

//main function 
int main(){

    char word[50];
    fgets(word,50,stdin);

    while (word[0]!='\n'){
//prints total lowercase letters
    printf("Number of lowercase letters:%d",count_lower(word));
    fgets(word, 50, stdin);
    
    }


}

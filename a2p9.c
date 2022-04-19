/*
CH-230-A
a2_p9
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int main()

{ 
    char ch;

 //printf("Enter a character:\n");             
    scanf("%c",&ch);

 //check if it is a number
    if (ch>='0' && ch<='9')  {                  
        printf("%c is a digit\n",ch);
    }
//check if it is a letter 
    else if (((ch >='a') && (ch <='z')) || (ch >='A' && ch<='Z') )        
    {
        printf("%c is a letter\n",ch);
    }
    
 //if both cases is false, prints character is symbol 
    else
    { printf("%c is some other symbol\n",ch);                             
    }

}
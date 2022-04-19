/*
CH-230-A
a2_p8
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int main()
{
  int a;
  printf("Enter an integer ");                   
  scanf("%i",&a);

    //check if integer divisible by both
  if ((a%2==0 ) && (a%7==0)){                  

      printf("A is divisible by both 2 and 7");

  }
    //check if integer divisible by 2 only 
  else if ((a%2==0) && (a%7!=0)){             

      printf("A is divisible by 2 but not 7 ");
  }
  
  //check if integer divisible by 7 only 
  else if((a%2!=0) && (a%7==0)){                  
      printf("A is divisble by 7 but not 2");
  }

  else{
      
     //if both false, prints integer is not divisible by both numbers  
    printf("A is not divisble by 7 and 2");         
    return 0;
  } 
  














}
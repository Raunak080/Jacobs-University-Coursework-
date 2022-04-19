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
  printf("Enter an integer ");                   //requires user to input integer
  scanf("%i",&a);

  if ((a%2==0 ) && (a%7==0)){                    //check if integer divisible by both

      printf("A is divisible by both 2 and 7");

  }

  else if ((a%2==0) && (a%7!=0)){               //check if integer divisible by 2 only 

      printf("A is divisible by 2 but not 7 ");
  }

  else if((a%2!=0) && (a%7==0)){                  //check if integer divisible by 7 only 
      printf("A is divisble by 7 but not 2");
  }

  else{

    printf("A is not divisble by 7 or 2");          //if both false, prints integer is not divisible by both numbers
  } 
  














}
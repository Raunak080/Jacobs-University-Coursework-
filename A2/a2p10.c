/*
CH-230-A
a2_p10
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include  <stdio.h>
int  main() {
    
    int n,h, idx;
    

     
   //establishing values of idx and h 
    idx=1;
    h=24;

   //putting it in a loop until user inputs positive value for n 
    while(n<=0){
       printf("Enter an integer:");
    scanf("%i",&n);
    }

   // runs program until the value of idx is equal or greater than n 
    while(idx<=n){
      printf("%i day= %i hours\n",idx,h);
      idx++;
      h=h+24;


    }

  

    
    
     
}




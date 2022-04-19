/*
CH-230-A
a5_p10
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

void decrease_num(int n){
  
  if(n > 1){
    
    //Recursive call until 2.
    printf("%d, ", n);
    decrease_num(n - 1);

  }

}


int main(){
  
  int n;
  
  scanf("%d", &n);
  
  decrease_num(n);
  /*The last in the sequence doesn't have comma after it
  but a full stop.*/
  printf("1.\n");
 
  return 0;

}
/*
CH-230-A
a2_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
 
 int main()
{
  int w,d,h,th;                      
  
   //requiring user to input data and reading it       
  printf("Enter number of weeks:");             
  scanf("%i",&w);

  printf("Enter number of days:");
  scanf("%i",&d);

  printf("Enter number of hours:");
  scanf("%i",&h);

 //calculating data to total number of hours 
  th=(w*7*24)+(d*24)+h;    

  //outputting the result                             
  printf("The total number of hours is: %i\n",th);     






}
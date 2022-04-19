/*
CH-230-A
a1_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <stdio.h>
int main(){
  int x=17, y=4;
  int sum, difference, product, mdiv;          //the result of the sum, difference, product and remainder from division
  float division;                              //the result of division 
  sum=x+y;
  difference=x-y;
  product=x * y;
  float x1=x, x2=y;

  division=x1/x2;
  

  mdiv= x % y;
  
  printf("x=%i\n",x);                             //printing all answers
  printf("y=%i\n",y);
  printf("sum=%i\n",sum);
  printf("product=%i\n",product);
  printf("difference=%i\n",difference);
  printf("division=%lf\n",division);
  printf("remainder of division=%i\n",mdiv);
return 0;





}

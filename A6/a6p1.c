/*
CH-230-A
a6_p1
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <stdio.h>


//defining macro with 3 paras:2 variables and 1 data type 
#define SWAP_1(a, b) int t1 = a; a = b; b = t1;
#define SWAP_2(c, d) double t2 = c; c = d; d = t2;


//main function 
int main(){

    //declaring variable
    int numa,numb;
    double numc,numd;

    scanf("%i",&numa);
    scanf("%i",&numb);

    scanf("%lf",&numc);
   scanf("%lf",&numd);


   SWAP_1(numa,numb);
   SWAP_2(numc,numd);

   //printing swap values

   printf("After swapping:\n");
   printf("%i\n",numa);
   printf("%i\n",numb);
   printf("%lf\n",numc);
   printf("%lf\n",numd);

}






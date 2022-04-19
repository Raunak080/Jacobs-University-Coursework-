/*
CH-230-A
a2_p6
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
int main(){

      //taking in double values
    double x;                               
    scanf("%lf",&x);

    double y;
    scanf("%lf",&y);

    //assigning pointers 
    double *ptr_one,*ptr_two,*ptr_three;      
    
    ptr_one=&x;
    ptr_two=&x;
    ptr_three=&y;
    
    //printing adress of pointers 
    printf("address of ptr 1 is:%p\n",ptr_one);           
    printf("address of ptr 2 is:%p\n",ptr_two);
    printf("address of ptr 3 is:%p\n",ptr_three);

}
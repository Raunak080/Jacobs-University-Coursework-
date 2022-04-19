/*
CH-230-A
a2_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
int main()
{
int a;               

printf("enter a value");                        //reads input 
scanf("%i",a); 

printf("%i\n",a);

//assingning a pointer variable for initail input
int *ptr_a;                    
ptr_a=&a;

//printing the adress of input variable
printf("the pointer value is : %p\n",ptr_a);    
*ptr_a=ptr_a+5;

//changing the data of *
printf("the new pointer %i\n",*ptr_a);
printf("the new pointer value %i\n",ptr_a);

return 0;




}
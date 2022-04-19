/*
CH-230-A
a2_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int main()
{   
   float a,b,h,sq,r,t,tz; 


    //requires user to input values of a,b and h 
    printf("Enter first value:\n ");              
    scanf("%f",&a);

    printf("Enter second value :\n");
    scanf("%f",&b);

   printf("Enter third value :\n");
   scanf("%f",&h);

   sq= a*a;                                     //calculating square area
   r = a*b;                                     //calculating rectangle area
   t= 0.5 *(a*h);                               //calculating triangle area
   tz=((a+b)/2)*h;                              //calculating trapenzium area

   //printing all calculated values
   printf("square area= %f\n",sq);               
   printf("rectangle area= %f\n",r);
   printf("triangle area= %f\n",t);
   printf("trapezoid area= %f\n",tz);



    
}
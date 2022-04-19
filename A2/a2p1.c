/*
CH-230-A
a2_p1
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>


int main()
{
    double a,b;                                        //for doubles problem
    float sum,difference,square;
    float avg;
    
      //for integer problem
    int c,d,sum1,product;                          
    
    //for character problem
    char char1,char2 ;                               
 
    //start with double program 
    printf("Enter first number :");                  
    scanf("%lf",&a);
    printf("Enter second number :");
    scanf("%lf",&b);
    
    sum=a+b;
    difference=a-b;
    square=a*a;
    
    printf("Sum of doubles = %lf\n",sum);
    printf("difference of doubles= %lf\n", difference);
   printf("square of the number=%lf\n",square);           

   //finish with doubles
   
   
   //start with integer
   printf("Enter first integer:");                        
   scanf("%i",&c);
   printf("Enter second integer:");
   scanf("%i",&d);
   
   sum1=c+d;
   product=c*d;
   
   printf("sum of integer: %i\n",sum1);
   printf("product of integer:%i\n",product);   
   //finish with integer problem          
   
   //start with character problem
   printf("Enter first character:");                      
   scanf(" %c",&char1);
   printf("Enter second character:");
   scanf(" %c",&char2);
   
   printf("sum of char=%d\n",(int)char1+(int)char2);
   printf("product of char=%d\n",(int)char1*(int)char2);
   printf("sum of chars=%c\n",char1+char2);

   //finish with character problem
   printf("product of chars=%c\n",char1*char2);         
   
   
   return 0;
   }
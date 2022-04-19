/*
CH-230-A
a3_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
//declaring function 
float to_pounds(int kg, int g){

    float result;
    float total;
    float g1;

    //converting values to pounds 
    g1=g*0.001;
    total=kg+g1; 
    result=2.2* total; 



    return result;
}


int main(){
 //taking in value of kg and g    
    int kg;
    scanf("%d",&kg);
    int g;
    scanf("%d",&g);
    
//calling function and printing result
    to_pounds(kg,g);
    printf("Result of conversion: %f\n",to_pounds(kg,g));
   
    

}
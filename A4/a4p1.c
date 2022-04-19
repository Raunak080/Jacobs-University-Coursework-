/*
CH-230-A
a4_p1
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){

    float i;
    float x;
    scanf("%f",&x);
    float max;
    scanf("%f",&max);
    float inx;
    scanf("%f",&inx);

    

 


    for (i=x;i<=max;i+=inx){
        
        printf("%f %f %f\n",i, i*i*M_PI, 2*M_PI*i );


    }

    return 0;

}
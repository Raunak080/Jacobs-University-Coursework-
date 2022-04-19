/*
CH-230-A
a3_p1
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int main(){
 
    int n, idx;
    float x;
 
                     
    scanf("%f",&x);

//loop until value of n is greater than 0 
    do {    
    scanf("%d",&n);

    if (n<=0){
    printf("Input is invalid, reenter value\n");
    }
    
    }while( n<=0);

//prints f until idx reaches n times 
    
    idx=1;  
    while (idx<=n){
        printf("%f\n",x );
        idx++;


    }


    
    

 


}
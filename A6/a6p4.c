/*
CH-230-A
a6_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define Intermediate
 
int main(){
    int n;
    int *arr1,*arr2;
    int scalar=0;   

    //take size for all vector 
    scanf("%d",&n);
    arr1= (int*) malloc(sizeof(int)* n);


    if (arr1 == NULL)
    {
        exit(1);
    }
     //for first vec
    for (int i=0;i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    arr2= (int*) malloc(sizeof(int)* n);
    if (arr2 == NULL)
    {
        exit(1);
        }

    //for second vector
    for (int i=0;i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }       

    //only if intermediate is defined, print value      
    #ifdef Intermediate
    printf("The intermediate product values are:\n");
    #endif
    for (int i = 0; i < n; i++)         
    {                                   
        scalar=scalar+(arr1[i]*arr2[i]);
        #ifdef Intermediate
        printf("%d\n",arr1[i]*arr2[i]);
        #endif
    }     

    //else just print scalar product                              
    printf("The scalar product is: %d\n",scalar);
 
    
    return 0;
}
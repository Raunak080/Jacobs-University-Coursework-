/*
CH-230-A
a5_p4
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size){

    //Dividing all elements by 5.
    for (int i = 0; i < size; i++){

        
     arr[i] = (float) arr[i]/5;

    }

}

//main function
int main(){

    int n; 
    float *ans;

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    
    ans= (float *) malloc(sizeof(float *) * n);

    //Check if memory could not be allocated.
    if (ans == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Entering values to the dynamic array.
    printf("Enter %d element(s) to your array\n", n);

    for(int i = 0; i < n; i++){

        scanf("%f", &ans[i]);

    }

    printf("\n");

    //Printing the before and after:
    printf("Before:\n");

    for (int j = 0; j < n; j++){
        
        printf("%.3f ", ans[j]);

    }

    printf("\n");

    
    printf("After:\n");

    //Calling the values produced by the void function.
    divby5(ans, n);
    
    for (int k = 0; k < n; k++){

        printf("%.3f ", ans[k]);

    }

    printf("\n");
    printf("\n");

    //Deallocation.
    free(ans);
    
    return 0;

}
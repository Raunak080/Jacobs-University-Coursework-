/*
CH-230-A
a4_p9
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function for max and min number
int prodminmax(int arr[], int n){

 //changes max number if new number is bigger than previous   
    int max;
    max=arr[0];
    for (int i=0; i<n;i++)
    {
        if (max<arr[i]){
            max=arr[i];
        }
    }
//changes min number if new number is smaller than previous 
    int min;
    min=arr[0];
    for (int i=0;i <n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }

    return (min*max);



}
//main function 
int main(){
    int n;
    printf("Enter the number of elements you want\n");
    scanf("%d",&n);
    int *arr;
    arr= (int*) malloc(sizeof(int)* n);
    if (arr == NULL){
        exit(1);
    }
    for (int i=0;i < n; i++){
        printf("Enter a number ");
        scanf("%d",&(*(arr + i)));
    }
    printf("The result of the max * min is %d\n",prodminmax(arr,n));
    free(arr);
    return 0;
}
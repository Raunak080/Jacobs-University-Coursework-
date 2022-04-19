/*
CH-230-A
a7_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Using function pointers to compare 
int ascend(const void *one, const void *two){

    //Typecasting voids to ints.
    const int *e1 = one;
    const int *e2 = two;

   
    return *e1 - *e2;

}


//Using function pointers to compare 
int descend(const void *one, const void *two){

   
    const int *e1 = one;
    const int *e2 = two;

    
    return *e2 - *e1;

}

//main functin
int main (){

    int sizeArr;
    char action;
    int *randomArr;

    scanf("%d", &sizeArr);

  
    randomArr = (int *) malloc(sizeof(int) * sizeArr);

    //Checks if memory could not be allocated.
    if (randomArr == NULL){

        printf("Memory could not be allocated\n");
        exit(1);

    }

    //Input to the array.                                  
    for (int i = 0; i < sizeArr; i++){

        scanf("%d", &randomArr[i]);

    }

    //Infinite loop until exit.             
    while(1){

        scanf("%c", &action);

        //Using switch to go through all 3 cases.
        switch(action){

            case('a'):{

                //Using qsort with its 4 args to sort accordingly
                qsort(randomArr, sizeArr, sizeof(int), ascend);

                //Printing the ascending ordered array.
                for(int i = 0 ; i < sizeArr; i++){  

                   printf("%d ", randomArr[i]);

                }

                printf("\n");

                break;

            }

            case('d'):{
                
                //Using qsort with its 4 args to sort accordingly
                qsort(randomArr, sizeArr, sizeof(int), descend);

                //Printing the descending ordered array.
                for(int i = 0 ; i < sizeArr; i++){  

                   printf("%d ", randomArr[i]);

                }

                printf("\n");

                break;
                
            }

            //Exit      
            case('e'):{

                return 0;
                break;
                
            }
            
        }

    }

    return 0;
    
}